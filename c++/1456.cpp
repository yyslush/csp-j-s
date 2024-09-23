#include <iostream>
#include <cmath>
using namespace std;

long long  f[2005]={0};
int a[2005],n;

int main()
{
  cin>>n;
  f[0]=1;
  for(int i=1;i<=n;++i) a[i]=i*i;
  for(int i=1;i<=n;++i)
    for(int j=a[i];j<=n;++j)
      f[j]+=f[j-a[i]];
  //for(int i=1;i<=n;++i) cout<<f[i]<<" ";cout<<endl;
  cout<<f[n];
  return 0;
}
