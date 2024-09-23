#include <iostream>
using namespace std;

int n,k,p=1,a[60]={0},b[60]={0};

int main()
{
  cin>>n>>k;
  a[1]=1;b[1]=1;
  for(int i=1;i<=k;++i)
  {
    int x=0;
    for(int j=1;j<=p;++j)
    {
      a[j]=a[j]*n+x;
      x=a[j]/10;
      a[j]%=10;
    }
    cout<<x<<" ";
    while(x>0)
    {
      a[++p]=x%10;
      x/=10;
    }
    x=0;
    for(int j=1;j<=p;++j)
    {
      b[j]=b[j]+a[j]+x;
      x=b[j]/10;
      b[j]%=10;
    }
    cout<<p<<endl;
    for(int j=1;j<=p;++j) cout<<a[j];cout<<endl;
    for(int j=1;j<=p;++j) cout<<b[j];cout<<endl;

  }
  for(int i=p;i>=1;--i) cout<<b[i];
  return 0;
}
