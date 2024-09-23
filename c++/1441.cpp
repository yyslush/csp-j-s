#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

bool p[1000005];
int n,k=0,s,l=1,maxprime=0,a[79000];

void prime(int n)
{
  memset(p,true,sizeof(p));
  for(int i=2;i<=n;++i)
    if(p[i])
      for(int j=2;j<=n/i;++j) p[i*j]=false;
  for(int i=2;i<=n;++i)
    if(p[i]) a[++k]=i;
}

int main()
{
  cin>>n;
  prime(n);
  for(int i=1;i<=k;++i)
  {
    s=a[i];
    int j=i;
    while(j+1<k&&s+a[j+1]<=a[k])
    {
      s+=a[++j];
      if(p[s]&&s>maxprime&&j-i+1>l) maxprime=s,l=j-i+1;
      //cout<<i<<" "<<j<<" "<<s<<" "<<l<<endl;
    }
  }
  cout<<maxprime;
  return 0;
}
