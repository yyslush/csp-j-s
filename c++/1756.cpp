#include <iostream>
#include <algorithm>
using namespace std;

int n,w,a[30005],cnt;

int main(){
  cin>>w>>n;
  for(int i=1;i<=n;++i) scanf("%d",&a[i]);
  sort(a+1,a+n+1);
  int p=1,q=n;
  while(p<=q)
    if(a[q]+a[p]<=w) ++p,--q,++cnt;//cout<<p<<":"<<a[p]<<" "<<q<<":"<<a[q]<<endl;}
    else --q,++cnt;//cout<<p<<":"<<a[p]<<" "<<q<<":"<<a[q]<<endl;}
  cout<<cnt;
  return 0;
}
