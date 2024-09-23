#include <iostream>
#include <cstring>
using namespace std;
int n,m,k,h,xa,ya,xb,yb,ans;
int a[105][105],b[30],f[105][105];
char map[105][105];
int dx[]={-1,1,0,0},
    dy[]={0,0,-1,1};
string s;
void pp()
{
    for (int i=1; i<=n; i++,cout<<endl)
    for (int j=1; j<=m; j++)
        cout<<map[i][j];
}
void pf()
{
    for (int i=1; i<=n; i++,cout<<endl)
    for (int j=1; j<=m; j++)
     if (f[i][j]>0)  cout<<f[i][j]<<" ";
     else cout<<0<<" ";
}
void dfs(int x,int y,int now)
{
    int xx,yy;
    if (x>n||x<1||y>m||y<1|| map[x][y]=='#') return ;
    f[x][y]=now;
    if (x==xb&&y==yb) return ;
    if (now<=0) return ;
    //cout<<x<<":"<<y<<"="<<f[x][y]<<endl;
    for (int i=0; i<4; i++)
    {
        xx=x+dx[i],yy=y+dy[i];
        if (map[x][y]=='#') return ;
        if (map[xx][yy]=='.')
            if (now>f[xx][yy])  dfs(xx,yy,now);
        if (map[xx][yy]>='A'&&map[xx][yy]<='Z')
            if (now-b[map[xx][yy]-'A'] > f[xx][yy])
                dfs(xx,yy,now-b[map[xx][yy]-'A']);
    }
    return ;
}

int main()
{
    scanf("%d%d%d%d",&n,&m,&k,&h);
    scanf("%d%d%d%d",&xa,&ya,&xb,&yb);

    for (int i=1; i<=n; i++)
    {
        cin>>s;
        for (int j=0; j<m; j++)
        map[i][j+1]=s[j];
        //cout<<map[i]<<endl;
    }
    for (int i=0; i<k; i++)
        scanf("%d",&b[i]);
    memset(f,0x8f,sizeof(f));
    int ff=f[0][0];
    //cout<<ff<<endl;
    //f[xa][ya]=h;
    dfs(xa,ya,h);
    //pf();
    if (f[xb][yb]==ff) f[xb][yb]=-1;
    cout<<f[xb][yb]<<endl;
//  cout<<endl;
//  pp();
    return 0;
}
