#include<string>
#include<cstring>
#include<iostream>
using namespace std;
string s,s1;
int main()
{
	int n,a1=0,b1=0,t;	
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>s;
		for(int j=0;j<s.length();++j)
		{
			t=s[j]-48;
			a1=(a1*10+t)%3;
			b1=(b1*10+t)%11;			
		}
		if(a1==0&&b1==0) s1=s1+char(51);
		if(a1!=0&&b1==0) s1=s1+char(50);
		if(a1==0&&b1!=0) s1=s1+char(49);
		if(a1!=0&&b1!=0) s1=s1+char(48);
		a1=0;b1=0;
	}
	cout<<s1;
	return 0;	
}
