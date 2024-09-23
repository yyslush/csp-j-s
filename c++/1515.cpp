#include<iostream>
#include<cstring>
using namespace std;

struct date
{
	long long ld,hd;
}f[55][55];
int a[55][55]={0},n,m;
long long s1=0,s2=0;

int main()
{
	int t;
	cin>>t;
	cin>>n>>m;
	memset(f,0,sizeof(f));
	f[1][0].ld=1;
	if(t==2)
	{
		int x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;		
		for(int i=y1;i<=y2;++i)
			for(int j=x1;j<=x2;++j) a[i][j]=-1;	
	}			
	for(int i=1;i<=n;++i)
		for(int j=1;j<=m;++j)
			if(a[i][j]!=-1)
			{
				s1=(f[i-1][j].ld+f[i][j-1].ld)%10000000000;
				s2=(f[i-1][j].ld+f[i][j-1].ld)/10000000000+f[i-1][j].hd+f[i][j-1].hd; 
				f[i][j].ld=s1;
				f[i][j].hd=s2;	
			} 
	if(f[n][m].hd>0) cout<<f[n][m].hd;
	cout<<f[n][m].ld;
	return 0;	
}
