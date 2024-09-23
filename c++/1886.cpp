#include<iostream>  
using namespace std;  
#define MOD 4096  
int dp[2016][2016];  
int m,n;  
int main()  
{  
    scanf("%d%d",&n,&m);  
    for(int k=0;k<=n;k++)  
        dp[k][0] = 1;  
    for(int i= n-1;i>=0;i--)  
    for(int j=1;j<=n;j++){  
        if(n-i-j+1<=m)  
            dp[i][j] = dp[i][j-1]%MOD; //pop  
        if(i+1+j<=n)  
            dp[i][j] =(dp[i][j]%MOD+dp[i+1][j]%MOD);//push  
    }  
    cout<<dp[0][n]<<endl;  
    return 0;  
}  
