#include<bits/stdc++.h> 
using namespace std;  
  
const int maxn=17;  
int a[maxn+1][maxn+1];  
int dp[1<<maxn]={0};  
int n,num;  
  
int main()  
{  
    cin>>n;  
    for (int i=1;i<=n;i++)  
        for (int j=1;j<=n;j++)  
            cin>>a[i][j];       
    for (int sta=1;sta<=(1<<n)-1;sta++)  
    {  
        num=0;  
        for (int j=0;j<n;j++)  
            if ((sta&(1<<j))>0) num++;  
        for (int i=1;i<=n;i++)  
            if (sta&(1<<(i-1)))  
                dp[sta]=max(dp[sta],dp[sta-(sta&(1<<(i-1)))]+a[num][i]);  
    }  
    cout<<dp[(1<<n)-1];   
    return 0;  
}  
