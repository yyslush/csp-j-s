#include<iostream>
#include<cstdio>
#define MAXN 101005
#define MAXE 2000005
using namespace std;
int n,k,m,cnt=0,q[MAXN],dis[MAXN],lnk[MAXN],son[MAXE],nxt[MAXE];
bool vis[MAXN];

void add(int x,int y)
{
	son[++cnt] = y,nxt[cnt] = lnk[x],lnk[x] = cnt;
}
void bfs()
{
    int head = 0,tail = 1;
    q[1] = 1;
		vis[1] = 1;
    while (head ^ tail)
	{
        int x = q[++head];
        for (int j = lnk[x];j;j = nxt[j])
			if (!vis[son[j]])
			{
	            vis[son[j]] = 1;
	            dis[son[j]] = dis[x] + 1;
	            q[++tail] = son[j];
        	}
    }
}
int main()
{
    cin>>n>>k>>m;
    for (int i = 1;i <= m;i++)
	    for (int j = 1;j <= k;j++)
		{
	        int x ;
          scanf("%d",&x);
	        add(x,i + n);
	        add(i + n,x);
	    }
    bfs();
    if (vis[n])
		printf("%d",(dis[n] >> 1) + 1);
	else
		cout << "-1";
    return 0;
}
