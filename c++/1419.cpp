#include<iostream>
#include<cstring>
using namespace std;

int a[4][100005],dp[4][100005],n;

int main()
{
	cin>>n;
	memset(dp,127,sizeof(dp));
	dp[1][0]=0;dp[2][0]=0;dp[3][0];
	for(int i=1;i<=3;++i)
		for(int j=1;j<=n;++j) cin>>a[i][j];
	for(int i=1;i<=n;++i)
	{
		dp[1][i]=min(dp[2][i-1],dp[3][i-1])+a[1][i];
		dp[2][i]=min(dp[1][i-1],dp[3][i-1])+a[2][i];
		dp[3][i]=min(dp[1][i-1],dp[2][i-1])+a[3][i];
	}
	cout<<min(min(dp[1][n],dp[2][n]),dp[3][n]);
	return 0;
}
