#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
vector<int>edge[1005];
queue<int>q;
int n, dep[1005], dep2[1005];
int bfs1()
{
    memset(dep, -1, sizeof(dep));
    dep[1]=0;int xx=1;
    q.push(1);
    while(!q.empty())
    {
        int x=q.front();q.pop();
        for(int i=0;i<edge[x].size();i++)
            if(dep[edge[x][i]]<0)
            {
                dep[edge[x][i]]=dep[x]+1;
                xx=edge[x][i];
                q.push(edge[x][i]);
            }
    }
    return xx;
}
int bfs2(int s)
{
    memset(dep, -1, sizeof(dep));
    dep[s]=1;int xx=s;
    q.push(s);
    while(!q.empty())
    {
        int x=q.front();q.pop();
        for(int i=0;i<edge[x].size();i++)
            if(dep[edge[x][i]]<0)
            {
                dep[edge[x][i]]=dep[x]+1;
                xx=edge[x][i];
                q.push(edge[x][i]);
            }
    }
    return xx;
}
void bfs3(int s)
{
    memset(dep2, -1, sizeof(dep2));
    dep2[s]=1;
    q.push(s);
    while(!q.empty())
    {
        int x=q.front();q.pop();
        for(int i=0;i<edge[x].size();i++)
            if(dep2[edge[x][i]]<0)
            {
                dep2[edge[x][i]]=dep2[x]+1;
                q.push(edge[x][i]);
                if(dep2[edge[x][i]]>dep[edge[x][i]])
                    dep[edge[x][i]]=dep2[edge[x][i]];
            }
    }
}
int main()
{
    scanf("%d", &n);
    for(int i=1;i<n;i++)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        edge[a].push_back(b);
        edge[b].push_back(a);
    }
    int x=bfs1();   int y=bfs2(x);      bfs3(y);
    for(int i=1;i<=n;i++)
        printf("%d\n", dep[i]);
    return 0;
} 
