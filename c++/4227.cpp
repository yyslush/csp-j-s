#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
const int MAXN = 500;
const int MAXM = 100;
const int INF = (1<<30);
int t[MAXN + 5];
int dp[MAXN + 5][MAXM*2 + 5];
int mn[MAXN + 5][MAXM*2 + 5];
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    for(int i=1;i<=n;i++)
        scanf("%d", &t[i]);
    sort(t+1, t+n+1);
    for(int i=0;i<=2*m;i++) {
    	dp[1][i] = i;
    	mn[1][i] = (i == 0) ? dp[1][i] : min(dp[1][i], mn[1][i-1]);
    }
    for(int i=2;i<=n;i++) {
    	for(int j=0;j<=2*m;j++) {
    		dp[i][j] = INF;
    		if( 0 <= t[i] - t[i-1] + j && t[i] - t[i-1] + j <= 2*m )
    			dp[i][j] = min(dp[i][j], dp[i-1][t[i]-t[i-1]+j] + j);
    		if( 0 <= t[i] - t[i-1] + j - m )
				dp[i][j] = min(dp[i][j], mn[i-1][min(t[i]-t[i-1]+j-m, 2*m)] + j);
			mn[i][j] = (j == 0) ? dp[i][j] : min(dp[i][j], mn[i][j-1]);
		}
	}
    int ans = INF;
    for(int i=0;i<=2*m;i++)
    	ans = min(ans, dp[n][i]);
    printf("%d\n", ans);
}
