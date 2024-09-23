#include<cstdio>  
#include<iostream>
#include<cstring>  
#include<algorithm>  
using namespace std;  
int main()  
{  
    int n, m, x1, y1, x2, y2;  
    long long dp[55][55];  
    scanf("%d%d", &n, &m);  
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);  
    memset(dp, 0, sizeof(dp));  
    dp[x1][y1] = 1;  
    for(int i = x1; i <= x2; i++)  
    {  
        for(int j = 1; j <= m; j++)  
        {  
            if(i-1>=0 && j-2>=0)  
                dp[i][j] += dp[i-1][j-2];  
            if(i-1>=0 && j+2<=n)  
                dp[i][j] += dp[i-1][j+2];  
            if(i-2>=0 && j-1>=0)  
                dp[i][j] += dp[i-2][j-1];  
            if(i-2>=0 && j+1<=n)  
                dp[i][j] += dp[i-2][j+1];  
        }  
    } 
    /*for(int i=1;i<=n;++i)
    {
    	for(int j=1;j<=n;++j) cout<<dp[i][j]<<" ";
    	cout<<endl;
	}*/
    printf("%lld\n", dp[x2][y2]);  
    return 0;
}  
