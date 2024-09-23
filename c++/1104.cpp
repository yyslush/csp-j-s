#include <iostream>
#include <string>
using namespace std;

string s;

int main()
{
  cin>>s;
  if((s[s.length()-1]-48)%2==0)
    cout<<"even";
  else
    cout<<"odd";
  return 0;
}
