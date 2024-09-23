#include<iostream>
#include<string>
using namespace std;
int f[10005][15][105],n,m;
string s;

int main()
{
	cin>>n>>m;
	f[0][0][0]=1;
	f[0][0][1]=1;
	for(int i=1;i<=n;++i)
	for(int j=1;j<=m;++j)
	if (i>=j)
	{
		if(f[i-1][j-1][0]>f[i-j][j][0]) f[i][j][0]=f[i-1][j-1][0];
		else f[i][j][0]=f[i-j][j][0];
		int x=0;
		for(int k=1;k<=f[i][j][0];++k)
		{
			f[i][j][k]=f[i-j][j][k]+f[i-1][j-1][k]+x;
			x=f[i][j][k]/10000;
			f[i][j][k]=f[i][j][k]%10000;
		}
		while(x>0)
		{
			f[i][j][f[i][j][0]+1]=x %10000;
			x=x /10000;
			++f[i][j][0];
		}
	}
	for (int i=f[n][m][0];i>=1;--i)cout<<f[n][m][i];
	return 0;
}
