#include <iostream>
#include <cstring>
using namespace std;

int n,r[105],t,dp[105][105];

int main(){
    cin>>n>>r[1];
    for(int i=2;i<=n;++i) r[i]=(r[i-1]*6807+2831)%201701,r[i-1]%=100;
    r[n]%=100;
    memset(dp,0x7fffffff,sizefo(dp));
    for(int i=0;i<99;++i){

    }

    return 0;
}
