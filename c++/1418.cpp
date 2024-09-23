#include<iostream>
#include<cmath>
using namespace std;

int n,m,black[305][305]={0},white[305][305]={0},ans=0;

int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;++i)
		for(int j=1;j<=m;++j)
		{
			int t;
			cin>>t;
			if(t) 
				black[i][j]=black[i-1][j]+1,white[i][j]=white[i-1][j];
			else 
				black[i][j]=black[i-1][j],white[i][j]=white[i-1][j]+1;				
		}
	for(int i=1;i<=n;++i)
		for(int j=1;j<=m;++j)
		{
			black[i][j]+=black[i][j-1];
			white[i][j]+=white[i][j-1];				
		}	
	for(int p=1;p<=min(n,m);++p)
		for(int i=1;i<=n-p;++i)
		for(int j=1;j<=m-p;++j)
		{			
			if(abs(black[i+p][j+p]+black[i-1][j-1]-black[i-1][j+p]-black[i+p][j-1]-(white[i+p][j+p]+white[i-1][j-1]-white[i-1][j+p]-white[i+p][j-1]))<=1) 		
				++ans;		
		}			
	cout<<ans;
	return 0;		
}
