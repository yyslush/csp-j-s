#include<iostream>
using namespace std;
long long a,b,c,a1,b1,m,n;
int ma(int a,int b,int c)
{
    if (a<b) a=b;
    if (c>a) a=c;
    return a; 
} 
long long gcd(long long x, long long y)
{
    return (x%y==0)?y:gcd(y,x%y); 
 } 
int main ()
{
    cin>>a>>b>>c;
    a1=ma(a,b,c);
    n=ma(a+b,b,c);
    m=ma(a,b,b+c);    
    long long r=gcd(a1,m*n); 
    cout<<a1/r<<"/"<<m*n/r;
    return 0;
      
}
