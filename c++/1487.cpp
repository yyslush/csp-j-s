#include <iostream>
#include <string>
using namespace std;

string s,s1;
int m,p;

int main()
{
  cin>>m;
  getchar();
  getline(cin,s);
  s1=s;
  s+=s;
  for(int i=0;i<m;++i)
  {
    string temps=s.substr(i,m);
    if(temps<s1)
    {
      s1=temps;
      p=i;
    }
  }
  cout<<p+1;
  return 0;
}
