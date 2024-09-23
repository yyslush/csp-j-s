#include<iostream>
#include<algorithm>
using namespace std;
int a[105],dp[105],dp1[105];

int main()
{
	int n,i,j,s;
	cin>>n;
	for(i=1;i<=n;i++) cin>>a[i];
	for(i=1;i<=n;i++)
	{
		s=0;
		for(j=1;j<=i;j++)
			if(a[j]<a[i]) s=max(s,dp[j]);
		dp[i]=s+1;
	}
	for(i=n;i>=1;i--)
	{
		s=0;
		for(j=n;j>=i;j--)
			if(a[j]<a[i]) s=max(s,dp1[j]);	
		dp1[i]=s+1;
	}
	for(i=1;i<=n;i++) s=max(dp[i]+dp1[i],s);
	cout<<n-s+1;
	return 0;
}
