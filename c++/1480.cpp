#include <iostream>
#include <cmath>
using namespace std;
int dp[3][5005],n,maxl=0;
bool f;
int main()
{
  cin>>n;
  for(int i=1;i<=n;++i)
    scanf("%d",&dp[0][i]);
  for(int i=1;i<=n;++i)
  {
    if(dp[0][i]>dp[0][i-1])
      dp[1][i]=dp[1][i-1]+1,dp[2][i]=dp[2][i-1]+1;
    else
      dp[1][i]=1,dp[2][i]=1;
    for(int j=1;j<=i-2;++j)
      if(dp[0][i]>dp[0][j])
        dp[2][i]=max(dp[2][i],dp[1][j]+1);
    maxl=max(maxl,max(dp[1][i],dp[2][i]));
  }
  cout<<maxl;
  return 0;
}
