#include <iostream>
#include <algorithm>
using namespace std;
int m,n,h[105],s[25],sum=0;

int main()
{
  cin>>m>>n;
  for(int i=1;i<=m;++i) cin>>h[i];
  for(int i=1;i<=n;++i) cin>>s[i];
  sort(h+1,h+m+1);
  sort(s+1,s+n+1);
  freopen("1483.out","w",stdout);
  for(int i=1;i<=m;++i) cout<<h[i]<<" ";cout<<endl;
  for(int i=1;i<=n;++i) cout<<s[i]<<" ";cout<<endl;
  int p=n,q=m,t=1;
  while(p>=1&&q>=1)
  {
    cout<<p<<" "<<q<<endl;
    if(s[p]<h[q]) --q;
    if(s[p]>=h[q]&&t<=2) sum++,++t,--q;
    if(t>2) t=1,--p;
    cout<<p<<" "<<q<<" "<<sum<<endl;
  }
  cout<<sum;
  fclose(stdout);
  return 0;
}
