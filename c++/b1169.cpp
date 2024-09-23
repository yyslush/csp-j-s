#include<iostream>
using namespace std;
int main()
{
    int i=1,n,k,m;
    cin>>n;
    while ((((1+i)*i/2-n)%2!=0)||(((1+i)*i/2)<n)) ++i;
    cout<<((1+i)*i/2-n)/2<<" "<<i;
    return 0;
}
