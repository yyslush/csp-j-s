#include <iostream>
using namespace std;

int n;
long long maxv=0,minv=2*1e+9;

int main()
{
  cin>>n;
  for(int i=1;i*i*i<=n;++i)
    if(n%i==0)
      for(int j=1;j*j<=n/i;++j)
        if(n/i%j==0)
        {
          long long  t=n/i/j;
          minv=min(minv,(i+1)*(j+2)*(t+2));
          minv=min(minv,(i+2)*(j+1)*(t+2));
          minv=min(minv,(i+2)*(j+2)*(t+1));
          maxv=max(maxv,(i+1)*(j+2)*(t+2));
          maxv=max(maxv,(i+2)*(j+1)*(t+2));
          maxv=max(maxv,(i+2)*(j+2)*(t+1));
        }
  cout<<minv-n<<" "<<maxv-n;
  return 0;
}
