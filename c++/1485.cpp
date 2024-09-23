#include <iostream>
using namespace std;

int n;
bool f=0;

int main()
{
  cin>>n;
  for(int i=1;i<=1000;++i)
  {
    int a=n%10;
    int b=n/10%10;
    int c=n/100%10;
    if(n==a*a*a+b*b*b+c*c*c)
    {
      f=true;
      cout<<n;
      break;
    }
    n=a*a*a+b*b*b+c*c*c;
  }
  if(!f) cout<<"error";
  return 0;
}
