#include<iostream>
#include<string>
using namespace std;
string s;
int main()
{
	int a=0,t=1;
	cin>>s;
	for (int i=1;i<s.length();++i)		{
		
			if (s[i-1]==s[i]) ++t;else t=1;
			if (t>a) a=t;
			//cout<<i<<s[i]<<" "<<t<<" "<<a<<endl;
		}
	cout<<a;
	return 0;	
}
