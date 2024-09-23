#include <iostream>
using namespace std;
int main()
{
    long long i=0,n,t=2,ans=0;
    cin>>n;   
    while (t<n)
    {
        t=t*2;
        i++;
        ans+=i;     
    }
    cout<<ans<<endl;
    return 0;
}
