#include <iostream>
using namespace std;

int n,m,a,b,k;

int gcd(int x,int y)
{
  if(x%y==0)
    return y;
  else
    return (gcd(y,x%y));
}

int main()
{
  cin>>k>>n>>m>>a>>b;
  if(k==1)
    cout<<n+m-a-b;
  else
    cout<<gcd(n-a,m-b);
  return 0;    
}
