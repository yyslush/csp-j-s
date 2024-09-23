#include <iostream>
#include <string>
using namespace std;

int n,p,k=1;
char ch='z';
string s1,s="";

int main()
{
  cin>>n;
  getchar();
  for(int i=1;i<=n;++i)
  {
    s+=getchar();
    getchar();
  }
  s=' '+s+s;
  s1=s.substr(1,n);
  for(int i=2;i<=n+1;++i)
    if(s1>s.substr(i,n))  s1=s.substr(i,n),k=i;
  printf("%d",k);
  return 0;
}
