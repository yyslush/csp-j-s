#include <iostream>
using namespace std;
int a[15],n,count=0;

int main()
{
  cin>>n;
  int p=0;
  while(n>0)
  {
    a[++p]=n%7;
    n/=7;
  }
  for(int i=1;i<=p;++i)
    if(a[p]>=4)
    {
      ++a[i+1];
      a[i]=7-a[i];
    }
  if(a[p+1]>0) ++p;
  for(int i=1;i<=p;++i) count+=a[i];
  cout<<count;
  return 0;
}
