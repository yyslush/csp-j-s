#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int n,m,maxl=0,f[2005],p=0;
struct date
{
  int u,v,w;
}q[10005];

int findf(int v)
{
  if(f[v]==v) return v;
  else
    return findf(f[v]);
}
bool cmp(date x,date y)
{
  return x.w<y.w;
}
int main()
{
  cin>>n>>m;
  for(int i=1;i<=m;++i)
    scanf("%d%d%d",&q[i].u,&q[i].v,&q[i].w );
  sort(q+1,q+m+1,cmp);
  for(int i=1;i<=n;++i) f[i]=i;
  for(int i=1;i<=m&&p<n;++i)
  {
    int t1=findf(q[i].v),t2=findf(q[i].u);
    if(t1!=t2)
    {
      f[t2]=t1;
      if(maxl<q[i].w) maxl=q[i].w;
      ++p;
    }
  }
  cout<<maxl;
  return 0;
}
