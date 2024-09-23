#include <iostream>
using namespace std;

int a[30005],n,k,ans=0;

bool check(int x)
{
    int num=0,s=0;
    for(int i=1;i<=n;++i)
    {
        s+=a[i];
        if (s>=x)s=0,num++;
    }
    return((num>=k));
}

int main()
{
  int l=1,r=0;
  cin>>n>>k;
  for(int i=1;i<=n;++i)
  {
    scanf("%d",&a[i]);
    r+=a[i];
  }
  r*=2;
  while(r>=l)
  {
    int mid=(r+l)/2;
    //cout<<r<<" "<<l<<" "<<mid<<" "<<ans<<endl;
    if(check(mid))
    {
      if(mid>ans) ans=mid;
      l=mid+1;
    }
    else r=mid-1;
  }
  cout<<ans;  
  return 0;
}
