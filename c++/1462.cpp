#include <iostream>
#include <algorithm>
using namespace std;

struct date
{
  long long  iq,ab;
} a[100005]={0};
int n,ans=0;
bool cmp(date x,date y)
{
  return (x.iq>y.iq||x.iq==y.iq && x.ab<=y.ab);
}

int main()
{
  cin>>n;
  for(int i=1;i<=n;++i) scanf("%lld",&a[i].iq);
  for(int i=1;i<=n;++i) scanf("%lld",&a[i].ab);
  sort(a+1,a+n+1,cmp);
  long long  temp=0;
  for(int i=1;i<=n;++i)
    if(a[i].ab>=temp)
    {
      ++ans;
      temp=a[i].ab;
    }
  cout<<ans;
  return 0;
}
