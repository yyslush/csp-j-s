#include<iostream>
#include<cmath>
using namespace std;
long long n,s;
int main()
{
    scanf("%lld",&n);
    for (int i=sqrt(n*2); i>=2; i--)
    {
        s=(2*n/i-i+1)/2;
        if ((s*2+i-1)*i==2*n)
        printf("%lld %lld\n",s,s+i-1);
    }
    return 0;
}
