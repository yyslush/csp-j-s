#include<iostream>
#include<cstring>
using namespace std;
int a[15][15],b[15],n,ans=0;
bool judge(int x,int y)
{
	for(int i=1;i<x;++i)
		if (a[i][x]==0&&b[i]==y) return(false);
	return(true);	
}
int  dfs(int x)
{
	if (x>5) return(++ans);
	for (int i=1;i<=4;++i)
	{
		if (judge(x,i)) 
		{
			b[x]=i;
			dfs(x+1);
		}
	}
}
int main()
{
	int x,y;
	memset(a,1,sizeof(a));
	memset(b,0,sizeof(b));
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>x>>y;
		a[x][y]=0;
		a[y][x]=0;
	}
	dfs(1);
	cout<<ans;
	return 0;
}
