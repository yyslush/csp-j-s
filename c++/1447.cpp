#include <iostream>
#include <cmath>
using namespace std;

int a,b,n;

int main()
{
  cin>>n;
  while(n--)
  {
    cin>>a>>b;
    if(a>b) swap(a,b);
    int k=(b-a)*(sqrt(5)+1)/2;
    if(a==k)
      cout<<0<<endl;
    else
      cout<<1<<endl;
  }
  return 0;
}
