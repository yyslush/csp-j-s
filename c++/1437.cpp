#include <iostream>
#include <cmath>
using namespace std;

int f[5005]={0},a[105],n,s=0,ave;

int main()
{
  cin>>n;
  for(int i=1;i<=n;++i)
  {
    cin>>a[i];
    s+=a[i];
  }
  ave=s/2;
  for(int i=1;i<=n;++i)
    for(int j=ave;j>=a[i];--j)
      if(f[j-a[i]]+a[i]>f[j]) f[j]=f[j-a[i]]+a[i];
  cout<<abs(s*(s-2*f[ave]));
  return 0;
}
