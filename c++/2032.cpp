#include<iostream>
using namespace std;
string s;
int c=0,m=0,n;
int main()
{
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>s;
		if(s[1]=='Y'||s[1]=='E'||s[1]=='X')
		{
			if(s[0]=='1') ++m;
			if(s[0]=='2') ++c;
		}	
	}
	cout<<m<<" "<<c;
	return 0;
}
