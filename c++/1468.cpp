#include <iostream>
#include <cmath>
using namespace std;

int f[10005],cnt[10005],a[105]={0},n,m,p=1,maxnn=0;

int find(int k)
{
  return k==f[k]?k:f[k]=find(f[k]);
}

int main()
{
  cin>>n>>m;
  for(int i=1;i<=n;++i) f[i]=i,cnt[i]=1;
  for(int i=1;i<=m;++i)
  {
    int x1,y1,fx,fy;
    scanf("%d%d",&x1,&y1);
    fx=find(x1);
    fy=find(y1);
    if(fx!=fy)
      cnt[fy]+=cnt[fx],f[fx]=fy;
    maxnn=max(maxnn,max(cnt[fx],cnt[fy]));
  }
  a[1]=1;
  for(int i=1;i<=maxnn;++i)
  {
    int x=0;
    for(int j=1;j<=p;++j)
    {
      a[j]=a[j]*2+x;
      x=a[j]/10;
      a[j]%=10;
    }
    if(x>0) a[++p]+=x;
    if(p>100) p=100;
  }
  a[1]--;
  for(int i=p;i>=1;--i) cout<<a[i];
  return 0;
}
