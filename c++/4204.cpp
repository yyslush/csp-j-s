#include<iostream>
using namespace std;
int n,sum[100005]={0},dp[100005]={0};
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)
	{
        cin>>dp[i];
        sum[i]=sum[i-1]+dp[i];
    }   
    for(int l=1;l<n;l++)        
        {
			for(int i=1;i+l<=n;i++)
        		dp[i]=sum[i+l]-sum[i-1]-min(dp[i],dp[i+1]);
        	//for(int j=1;j<=n-l;++j)	cout<<dp[j]<<" ";
			//cout<<endl;		
		}            
    cout<<dp[1]<<' '<<(sum[n]-dp[1])<<endl;
    return 0;
}
