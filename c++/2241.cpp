#include<iostream>
using namespace std;
int a[105][105],maxn=-1,n,m,lx;

void biuldtree(int x,int y)
{
	a[x][y]=1;
	++a[x][0];
	++a[0][y];
	if (maxn<a[x][0]) 
	{
		maxn=a[x][0];
		lx=x;
	}
	return;
}
int main()
{
	int x,y;
	cin>>n>>m;
	for(int i=1;i<=m;++i) 
	{
		cin>>x>>y;
		biuldtree(x,y);		
	}
	int i=1;
	while(i<=n&&a[0][i]!=0) ++i;
	cout<<i<<endl;
	cout<<lx<<endl;
	for(i=1;i<=n;++i)
		if (a[lx][i]!=0) cout<<i<<" ";
	return 0;	
}
