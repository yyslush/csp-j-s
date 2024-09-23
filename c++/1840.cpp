#include<iostream>
using namespace std;
int a[100005]={0},dp[100005],p,q,n;

int main()
{
	cin>>p>>q>>n;dp[1]=p;
	for(int i=2;i<=n+1;++i) cin>>a[i];
	for(int i=2;i<=n+2;++i)
	{
		if(dp[i-2]<q&&dp[i-1]<q)
		{
			cout<<"NO";
			return 0;
		}			
		else		
			if(dp[i-2]>dp[i-1]) dp[i]=dp[i-2]-q+a[i];
			else dp[i]=dp[i-1]-q+a[i];		 
	}
	cout<<dp[n+2];
	return 0;
}
