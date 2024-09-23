#include<iostream>
#include<cmath>
using namespace std;
int  pri[205],n,dp[205]={0};

int mpri()
{
	for(int i=2;i<=200;++i) pri[i]=1;
	for(int i=2;i<=int(sqrt(200));++i)
		if (pri[i])
		for(int j=2;j<=200/i;++j) pri[i*j]=0;	
	int i=0;
	for(int j=2;j<=200;++j) 
		if(pri[j]) pri[++i]=j;	
	return(i);
}

int main()
{
	cin>>n;
	int l=mpri();
	dp[0]=1;
	for(int i=1;i<=l;++i)
		for(int j=pri[i];j<=n;++j) dp[j]+=dp[j-pri[i]];
	cout<<dp[n];
	return 0;
}

