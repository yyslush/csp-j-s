#include <iostream>
using namespace std;
int f[10005],n;

int main()
{
  cin>>n;
  f[1]=3;f[2]=13;
  for(int i=3;i<=n;++i)
    f[i]=(f[i-1]*3+f[i-2]*4)%10007;
  cout<<f[n]%10007;
  return 0;
}
