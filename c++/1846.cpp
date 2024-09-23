#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
  
const int MAX = 101;
const int MAXHEIGHT = 10000;
int n,s[MAX],dp[MAX][MAXHEIGHT];//f[i][j]表示：经过i轮后，当前高度为j的达到过的最低高度。 
  
int main()
{
    cin>>n;
    freopen("1846.out","w",stdout);
    for(int i = 1; i <= n; i++) cin>>s[i];
          
    for(int i = 0; i<n;i++)
        for(int j = 0;j<MAXHEIGHT;j++)
            dp[i][j] = -1;
    
    dp[0][0] = 0;     
      
    for(int i = 1; i <= n; i++)
        for(int j = 0; j <= 16; j++)
        {
            int down = MAXHEIGHT+1, up = MAXHEIGHT+1;
            if(s[i] <= j && dp[i-1][j-s[i]] != -1) down = max(j, dp[i-1][j-s[i]]);
            if(j+s[i] < MAXHEIGHT && dp[i-1][j+s[i]] != -1) up = max(j+s[i],dp[i-1][j+s[i]]);
            dp[i][j] = min(down,up);
            //if(dp[i][j] == MAXHEIGHT + 1) dp[i][j] = -1;  
		for(int i = 1; i <= n; i++)
		{
			for(int j = 0; j <= 16; j++) cout<<setw(5)<<dp[i][j];
			cout<<endl;	
		}
		cout<<endl;
              
        }
        
    if(dp[n][0] == -1) cout<<"IMPOSSIBLE"<<endl; else  cout<<dp[n][0]+2;
    fclose(stdout);
    return 0;
}
