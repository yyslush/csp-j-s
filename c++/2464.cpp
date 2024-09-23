#include<iostream>
using namespace std;
long long dp[60];
int n;
int main()
{
	dp[1]=1;dp[2]=2;dp[3]=3;
	for(int i=4;i<=56;++i) dp[i]=dp[i-1]+dp[i-3];
	cin>>n;
	for(int j=1;j<=n;++j)
	{
		int t;
		cin>>t;	
		if(t==0) break;else cout<<dp[t]<<endl;
	}	
	return 0;	
}
