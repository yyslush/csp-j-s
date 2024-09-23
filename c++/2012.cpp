#include<iostream>
#include<string>
using namespace std;
string s,t;
int sum=0;
int main()
{
    cin>>s>>t;
    for(int i=0;i<s.length();i++) s[i]=tolower(s[i]);
    for(int i=0;i<t.length();i++) t[i]=tolower(t[i]);
    while(t.find(s)!=-1)
    {
        ++sum;
        t.erase(0,t.find(s)+s.length());
        //cout<<t<<endl;
    }
    cout<<sum;
    return 0;
}
