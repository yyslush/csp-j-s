#include <iostream>
#include <string>
#include <map>
using namespace std;

string s="",t;
int ans=0;
map<string,int> m;

int main()
{
  while(getline(cin,t)&&t[0]!='0') s+=t;
  for(int i=0;i<s.length()-4;++i)
  {
    string ts=s.substr(i,5);
    //cout<<ts<<endl;
    ++m[ts];
  }
  map<string,int> :: iterator it;
  for(it=m.begin();it!=m.end();++it)
    if(it->second > ans) ans=it->second;
  cout<<"The  maximum  number  of  the  identical  5-mers  is  "<<ans<<".";
  return 0;
}
