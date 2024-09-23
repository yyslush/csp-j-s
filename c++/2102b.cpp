#include<iostream>
#include<string>
using namespace std;
string a,b;
int s;
int main()
{
    cin>>a>>b;
    for(int i=0;i<a.length();i++)
        a[i]=toupper(a[i]);
    for(int i=0;i<b.length();i++)
        b[i]=toupper(b[i]);
    while(b.find(a)!=-1)
    {
        s++;
        b=b.substr(b.find(a)+a.length());
    }
    cout<<s;
    return 0;
}
