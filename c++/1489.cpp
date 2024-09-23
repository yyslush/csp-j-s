#include <iostream>
using namespace std;
int n,m,s;
int gcd(int x,int y)
{
  if(x%y==0)
    return y;
  else
    return(gcd(y,x % y));
}
int main()
{
  cin>>n>>m;
  s=n*m;
  cout<<"xuexiao="<<s/(gcd(n,m)*gcd(n,m));
  return 0;
}
