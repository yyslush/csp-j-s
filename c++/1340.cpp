#include<iostream>
#include<string>
using namespace std;
int a[35];
int main()
{
    string s;
    long long n,t=1,temp=0,sum=0;    
    cin>>n;
    cin>>s;    
    for(int i=s.length()-1;i>=0;i--)
    {
        sum=sum+(s[i]-48)*t;
        t=t*n;
    }
    while(sum>0)
    {
        a[++temp]=sum%2;
        sum=sum/2;
    }
    for(int i=temp;i>=1;i--)cout<<a[i];
    return 0;
}
