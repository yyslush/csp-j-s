#include <iostream>
#include <string>
#include <cmath>
using namespace std;
string s="",ss;
int w=0,l=0;

int main()
{
  while(cin>>ss) {
    s+=ss;
  }
  for(int p=0;p<s.length();++p){
    if(s[p]=='W')++w;
    if(s[p]=='L')++l;
    if(s[p]=='E') {
      cout<<w<<":"<<l<<endl;
      break;}
    if(abs(w-l)>=2&&(w>=11||l>=11)){
      cout<<w<<":"<<l<<endl;
      w=0;l=0;
    }
    //cout<<p<<" W"<<w<<" L"<<l<<endl;
  }
  cout<<endl;
  w=0;l=0;
  for(int p=0;p<s.length();++p){
    if(s[p]=='W')++w;
    if(s[p]=='L')++l;
    if(s[p]=='E') {
      cout<<w<<":"<<l<<endl;
      break;}
    if(abs(w-l)>=2&&(w>=21||l>=21)){
      cout<<w<<":"<<l<<endl;
      w=0;l=0;
    }
    //cout<<p<<" W"<<w<<" L"<<l<<endl;
  }
}
