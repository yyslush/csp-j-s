#include <iostream>
using namespace std;

int n,m,count=0;

int main()
{
  cin>>n>>m;
  for(int i=1;i<=n;++i)
  {
    int t;
    cin>>t;
    count+=t/m;
    if(t%m>0) ++count;
  }
  cout<<count;
  return 0;
}
