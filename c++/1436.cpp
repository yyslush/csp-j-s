#include <iostream>
#include <algorithm>
using namespace std;

int a[30005]={0},n,ans=0;

int main()
{
  cin>>n;
  for(int i=1;i<=n;++i) scanf("%d",&a[i]);
  sort(a+1,a+n+1);
  for(int i=2;i<=n;++i)
    if(a[i]<=a[i-1])
    {
      ans=ans+a[i-1]-a[i]+1;
      a[i]=a[i-1]+1;
    }
  cout<<ans;
  return 0;
}
