#include<iostream>
#include <string>
using namespace std;
int main()
 {
  string s,st="";
  int maxl=0;
  getline(cin,s);
  int i=0;
  while(i<=s.length())
  {
      if(s[i]=='.')
      {
        //cout<<i<<" ";
        string stemp=s.substr(0,i+1);
        //cout<<stemp<<endl;
        int p=0;
        while(stemp[p]==' ') ++p;
        stemp.erase(0,p);
        if(st.length()<=stemp.length()) st=stemp;
        s.erase(0,i+1);
        i=0;
        //cout<<st<<endl;
      }
      else
        ++i;
  }
  cout<<st<<endl;
  cout<<st.length();
  return 0;
}
