#include<iostream>
#include<algorithm>
using namespace std;
int a[30010],i,j,ans,n,m;
int main()
{
    cin>>m>>n;
    for (i=1;i<=n;i++)
      scanf("%d",&a[i]);
    sort(a+1,a+1+n);
    i=1;j=n;
    while(i<=j)
    {
        if (a[i]+a[j]<=m)
          i++;
        j--;
        ans++;
    }
    cout<<ans;
}
