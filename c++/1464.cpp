#include <iostream>
#include <cstring>
using namespace std;

int f[1005][1005]={0},a[1005][1005]={0},n,l,ans=0;
bool fl[1005];

void find(int x)
{
  fl[x]=1;
  ++l;
  if(l>ans) ans=l;
  for(int i=1;i<=n;++i)
  {
    if(a[x][i]>0)
    {
      if(ans<l+a[x][i]) ans=l+a[x][i];
      return ;
    }
    if(f[x][i]==1 && fl[i]==0)
    {
      fl[i]=1;
      //cout<<x<<" "<<i<<" "<<l<<endl;
      find(i);
    }
  }
  --l;
}

int main()
{
  cin>>n;
  for(int i=1;i<=n-1;++i)
  {
    int x,y;
    scanf("%d%d",&x,&y);
    f[x][y]=f[y][x]=1;
  }
  int i,j;
  for(i=1;i<=n;++i)
  {
    ans=0;
    for(j=1;j<=n;++j)
    {
      if(f[i][j])
      {
        l=1;
        memset(fl,0,sizeof(fl));
        fl[i]=1;
        find(j);
      }
    }
  a[i][j]=ans;
  printf("%d\n",ans );
  }
  return 0;
}
