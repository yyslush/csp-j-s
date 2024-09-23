
#include<iostream>
#include<cmath>
using namespace std;
void dfs(int d[],int c[])
{
 int dp[505]={0};
 for(int i=500;i>0;i--)
   for(int j=500,k=i;j>0;j--) {
     dp[k--]+=d[i]*c[j];
     if(k==0) break;
   }
 for(int i=500;i>0;i--) {
   dp[i-1]+=dp[i]/10;
   dp[i]=dp[i]%10;
   d[i]=dp[i];
 }
 dp[0]=0;
 return ;
}
int main()
{
 int p;
 cin>>p;
 int z=p,a[505]={0},b[505]={0},c[505]={0};
 a[500]=2;
 b[500]=1;
 while(p)
 {
   if(p%2) dfs(b,a);
   dfs(a,a);
   p/=2;

 }
 b[500]-=1;
 cout<<int(z*log10(2))+1<<endl;
 for(int i=1;i<=500;i++)
 {
   cout<<b[i];
   if(i%50==0) cout<<endl;
 }
 return 0;
}
