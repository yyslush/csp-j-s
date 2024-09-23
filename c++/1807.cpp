#include<iostream>
#include<queue>
#include<cstring>
using namespace std;
queue<int> q;
int nu[205],dis[505],n,a,b;
int bfs(int x)
{
	q.push(x);dis[x]=1;
	int i=1;
	while(!q.empty())
	{
		int here=q.front(),down=here-nu[here],up=here+nu[here];
		q.pop();
		if(down>=1&&!dis[down])
		{
			q.push(down);			
			dis[down]=dis[here]+1;
		}
		if(up<=n&&!dis[up])
		{
			q.push(up);			
			dis[up]=dis[here]+1;
		}
		if (up==b||down==b) 
		{
			cout<<dis[b]-1;
			return 0;
		}
	}
	cout<<-1;		
}
int main()
{
	//freopen("test/lift09.in","r",stdin);
	cin>>n>>a>>b;
	for (int i=1;i<=n;++i) cin>>nu[i];
	bfs(a);
	//fclose(stdin);
	return 0;	
}
