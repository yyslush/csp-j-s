#include <iostream>
#include <algorithm>
using namespace std;

long long a,b,c,n;

int main(){
    cin>>a>>b>>c;
    long long t=__gcd(a,b);
    n=a*b/t;
    t=__gcd(n,c);
    cout<<n*c/t;
    return 0;
}
