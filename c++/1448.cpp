#include <iostream>
#include <string>
#include <cmath>
using namespace std;
string s;
int a,b,l=0;
int checkcd(string s)
{
  int step=0;
  for(int i=0;i<49;++i)
  {
    ++step;
    for(int j=i+step;j<i-step;j+=step)
      if(s.substr(i,step)!=s.substr(j,step)) break;
  }



}

int main()
{
  cin>>a>>b;
  cout<<a<<"/"<<b<<"="<<a/b<<".";
  a%=b;
  int i;
  for(i=0;i<50;++i)
  {
    s[i]=a*10/b+'0';
    a=a*10%b;
    if (a==0) break;
  }
  if(i<50-1)
  {
    for(int j=0;j<=i;++j) cout<<s[j];
    cout<<"(0)"<<endl<<1;
  }
  else
    checkcd(s);
  return 0;
}
