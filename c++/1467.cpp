#include<iostream>
using namespace std;

bool a[10001][10001];
int row[10005]={0},n,m,p=1,t=0;

int main()
{
    cin>>n>>m;
    for(int i=1;i<=m;++i)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        a[x][y]=a[y][x]=1;
        ++row[x];++row[y];
        if(t<row[x]) t=row[x];
        if(t<row[y]) t=row[y];
    }
    while(row[p]<t) ++p;
    for(int i=1;i<=n;++i)
        if(a[p][i]) cout<<i<<" ";
    return 0;
}
