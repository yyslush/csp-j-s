#include<iostream>
#include<queue>
#include<cstring>
using namespace std;
int n,m;
int dis[4][2]= {1,0,0,1,-1,0,0,-1};
int vis[205][205];
string w[205];
struct man
{
    int x,y,step;
};
queue<man>q;
void bfs(man s)
{
    q.push(s);
    while(!q.empty())
    {
        man t=q.front();       
        if(w[t.x][t.y]=='a'){cout<<t.step;exit(0);}
        else if(w[t.x][t.y]=='x'){t.step++;q.pop();q.push(t);w[t.x][t.y]='.';continue;}
        q.pop();
        for(int i=0;i<4;++i)
        {
            int xx=t.x+dis[i][0];int yy=t.y+dis[i][1];
            if(xx>=0&&xx<n&&yy>=0&&yy<m&&vis[xx][yy]==0&&w[xx][yy]!='#')
            {
                man k;
                vis[xx][yy]=1;
                k.step=t.step+1;k.x=xx;k.y=yy;q.push(k);
            }
        }
    }
}
int main()
{
    //freopen("test/save2.in","r",stdin);
	memset(vis,0,sizeof(vis));
    cin>>n>>m;
	man s;
    for(int i=0;i<n;++i)cin>>w[i];
    for(int i=0; i<n; ++i)
        for(int j=0; j<m; ++j)
        {
            if(w[i][j]=='r')
            {
 
                s.x=i;
                s.y=j;
                s.step=0;
            }
        }
    bfs(s);
    cout<<"NO ANSWER";
    //fclose(stdin);
    return 0;
}
