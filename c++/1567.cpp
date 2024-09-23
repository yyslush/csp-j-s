#include<iostream>
using namespace std;
int a[1001],n,k,p=0,i,ans;
int main()
{
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>k;
        a[k]++;
        if (a[k]==1) ans++;
        if(p<k) p=k;
    }
    cout<<ans<<endl;
    for (i=1;i<=1000;i++)
      if (a[i])
        if (i!=p) cout<<i<<" ";else cout<<i;
    return 0;
}
