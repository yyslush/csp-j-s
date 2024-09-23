#include <iostream>
#include <cstring>
using namespace std;

int n,m,t,maxc,k,step[40005]={0},food[40005]={0};a[205][205]={0};f[2][4]={{0,1,0,-1},{1,0,-1,0}};
char map[205][205];
struct node
{
  int r,l;
} q[40005];

int main()
{
  scanf("%d %d",&n,&m,&t,&maxc);
  for(int i=1;i<=n;++i)
  {
    getchar();
    for(int j=1;j<=m;++j)
        scanf("%c",&map[i][j]);
  }
  cin>>k;
  for(int i=1;i<=k;++i)
  {
    int x,y,t;
    cin>>x>>y>>t;
    a[x][y]=t;
  }
  int head=1,tail=1;
  q[head].r=1;q[tail].l=1;step[1]=0;
  map[1][1]='*';
  while(head<=tail)
  {

    for(int i=0;i<4;++i)
    {
      int x=q[head].r+f[0][i];
      int y=q[head].l+f[1][i];
      if(x>=1&&x<=n&&y>=1&&y<=m&&map[x][y]=='.')
      {
        //cout<<x<<" "<<y<<" "<<map[x][y]<<endl;
        map[x][y]='*';
        q[++tail].r=x;
        q[tail].l=y;
        step[tail]=step[head]+1;
        //cout<<head<<" "<<tail<<" "<<q[tail].r<<" "<<q[tail].l<<" "<<step[tail]<<endl;
        if((x==n)&&(y==m))
        {
          cout<<step[tail];
          return 0;
        }
      }
    }
    ++head;
  }
}
