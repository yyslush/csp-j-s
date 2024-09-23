#include<iostream>
#include<cmath>
using namespace std;
int a[10005],dp1[10005]={0},dp2[10005]={0},n;
  
int main()
{
    cin>>n;   
    for(int i=2;i<=n+1;++i) cin>>a[i];
    for(int i=2;i<=n+1;++i)
    {
        dp2[i]=min(dp1[i-1],dp2[i-1])+a[i];  
		dp1[i]=min(dp2[i-1],dp2[i-2]); 
    }
    cout<<min(dp1[n+1],dp2[n+1]); 
    return 0;
}
