#include <iostream>
using namespace std;

int n;
long long c=0,s=0,a,b,d;

int main()
{
  cin>>n;
  for(int i=1;i<=n;++i)
  {
    int k;
    cin>>k;
    if(k==1)
    {
      cin>>a>>b;
      c+=(a+b)*2; s+=a*b;
    }
    if(k==2)
    {
      cin>>a;
      c+=4*a; s+=a*a;
    }
    if(k==3)
    {
      cin>>a>>b>>d;
      c+=(a+b+d);
      if(a>b) swap(a,b);
      if(b>d) swap(d,b);
      s=s+(a*b)/2;
    }
  }
  cout<<c<<" "<<s;
  return 0;
}
