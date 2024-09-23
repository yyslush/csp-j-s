#include<iostream>
#include<cmath>
using namespace std;
int a[105][105][105]={0},n,m;

int main()
{
	cin>>n>>m;
	a[1][1][1]=1;a[1][1][0]=1;
	for(int i=2;i<=n;++i)
		for(int j=1;j<=m;++j)
		{	 
			int x=0;
			a[i][j][0]=max(a[i-1][j-1][0],a[i-1][j][0]);//sum's long	;
			for(int k=1;k<=a[i][j][0];++k)
			{
				a[i][j][k]=a[i-1][j-1][k]+a[i-1][j][k]+x;
				x=a[i][j][k]/10;
				a[i][j][k]%=10;
			}
			if(x>0) ++a[i][j][0],a[i][j][a[i][j][0]]=x;			
		}
	for(int i=a[n][m][0];i>=1;--i) cout<<a[n][m][i];
	return 0;		
}
