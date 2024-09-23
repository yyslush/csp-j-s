#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int n;
string a[1005];

int cmp(string s1,string s2)
{
  return s1+s2<s2+s1;
}

int main()
{
  cin>>n;
  for(int i=1;i<=n;++i) cin>>a[i];
  sort(a+1,a+n+1,cmp);
  //for(int i=1;i<=n;++i) cout<<a[i]<<endl;
  int p=1;
  while(a[p]=="0")++p;
  for(int i=p;i<=n;++i) cout<<a[i];
  return 0;
}
