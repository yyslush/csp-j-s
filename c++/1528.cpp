#include <iostream>
#include <string>
using namespace std;

int n=0,m=0,a[100]={0},f[100]={0},c[100]={0};
string s;

int main()
{
  getline(cin,s);
  s+=" ";
  int p=0;
  for(int i=0;i<s.length();++i)
    if(s[i]!=' ') m=m*10+s[i]-'0'; else a[++p]=m,m=0;
  for(int i=1;i<=p;++i)
  {
    f[i]=1;
    for(int j=1;j<=i-1;++j)
      if(a[j]>=a[i])
        if(f[j]+1>f[i]) f[i]=f[j]+1;
    if(f[i]>m) m=f[i];
    int t=0;
    for(int j=1;j<=n;++j)
      if(c[j]>=a[i])
        if(t==0) t=j;
        else
          if(c[j]<c[t]) t=j;
    if(t==0) ++n,t=n;
    c[t]=a[i];
  }
  cout<<m<<endl<<n;
  return 0;
}
