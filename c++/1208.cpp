#include<iostream>
#include <algorithm>
using namespace std;
int n,m,i,j,k,a[1005],b[1005],ans;
int main()
{
    cin>>n;
    for (i=1;i<=n;i++)cin>>a[i];
    for (i=1;i<=n;i++)cin>>b[i];
    sort(a+1,a+1+n);    
    sort(b+1,b+1+n);
    for (i=1;i<=n;i++)
        ans+=abs(a[i]-b[i]);
    cout<<ans;
    return 0;
} 
