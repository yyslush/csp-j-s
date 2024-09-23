#include<iostream>
#include<queue>
#include<cstring>
#include<algorithm>
#include<time.h>
using namespace std;
struct man
{
	int x,y;
};
queue<man> q;
char a[2005][2005];
int b1[2005][2005],b2[2005][2005],gx[4]={0,0,1,-1},gy[4]={1,-1,0,0};
int n,m,maxn=0;
int countboom()
{
	int sum;
	for(int i=2;i<n;++i)
	{
		sum=0;
		for(int j=2;j<=m;++j)
		{
			if (a[i][j]=='G') ++sum;
			if (a[i][j]=='#') {b1[i][j-1]=sum;sum=0;}
		}		
		for (int j=m-2;j>1;--j)
			if (a[i][j]!='#'&&b1[i][j]==0) b1[i][j]=b1[i][j+1];		
	}
	for(int j=2;j<m;++j)
	{
		sum=0;
		for(int i=2;i<=n;++i)
		{
			if (a[i][j]=='G') ++sum;
			if (a[i][j]=='#') {b2[i-1][j]=sum;sum=0;}
		}
		for (int i=n-2;i>1;--i)
			if (a[i][j]!='#'&&b2[i][j]==0) b2[i][j]=b2[i+1][j];			
	}		
	/*for (int i=1;i<=n;++i)
	{
		for (int j=1;j<=m;++j) cout<<b2[i][j]<<" ";
		cout<<endl;
	}*/	
}
int bfs(int xx,int yy)
{
	man t;
	t.x=xx;t.y=yy;
	q.push(t);	
	if (b1[xx][yy]+b2[xx][yy]>maxn) maxn=b1[xx][yy]+b2[xx][yy];
	//cout<<xx<<" "<<yy<<" "<<maxn<<endl;
	a[t.x][t.y]='#';
	while(!q.empty())
	{
		for(int i=0;i<=3;++i)
		{
			t=q.front();
			xx=t.x+gx[i];yy=t.y+gy[i];
			if (xx>1&&xx<n&&yy>1&&yy<m&&a[xx][yy]=='.')
			{
				t.x=xx;t.y=yy;			
				q.push(t);
				a[xx][yy]='#';
				if (b1[xx][yy]+b2[xx][yy]>maxn) maxn=b1[xx][yy]+b2[xx][yy];
				t=q.front();
				//cout<<t.x<<" "<<t.y<<" "<<xx<<" "<<yy<<" "<<maxn<<endl;
			}
		}
		q.pop();
	}	
}
int main()
{
	int x,y;	
	//freopen("test/boom9.in","r",stdin);
	//freopen("test/boom.out","w",stdout);
	cin>>n>>m>>x>>y;
	for (int i=1;i<=n;++i)
		for(int j=1;j<=m;++j) cin>>a[i][j];
	countboom();
	bfs(x,y);
	cout<<maxn<<endl;
	//fclose(stdin);
	//fclose(stdout);
	return 0;		
}
