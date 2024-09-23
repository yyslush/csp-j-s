#include <iostream>
using namespace std;
int a[55][55],n,x,y,t=0;
bool clear(int x,int y)
{
  for(int i=x-1;i<=x+1;++i)
    for(int j=y-1;j<=y+1;++j)
    {
      if(a[i][j]==0) a[i][j]=-1;
      if(a[i][j]==1) a[i][j]=-2,--t;
    }
}
int main()
{
  cin>>n;
  for(int i=1;i<=n;++i)
    for(int j=1;j<=n;++j)
    {
      cin>>a[i][j];
      t+=a[i][j];
    }
  while(scanf("%d%d",&x,&y)&&x!=0)
  {
    if(a[x][y]==1)
    {
      cout<<"GAME OVER!";
      return 0;
    }
    if(a[x][y]==0)
      clear(x,y);
    if(t==0)
    {
      cout<<"YOU ARE WINNER!";
      return 0;
    }
  }
  for(int i=1;i<=n;++i)
  {
    for(int j=1;j<=n;++j) cout<<a[i][j]<<" ";
    cout<<endl;
  }
  return 0;
}
