#include<iostream>
using namespace std;
int n,f;
int main()
{
    cin>>n;
    f=n*(n-1)+1;
    for(int i=1;i<n;i++)
        cout<<f+(i-1)*2<<' ';
    cout<<f+n*2-2;
    return 0;
}
