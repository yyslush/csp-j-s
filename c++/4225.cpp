#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	int ans=0;
	getline(cin,s);
	for(int i=0;i<s.length();++i)
		if(s[i]>='a'&&s[i]<='z'||s[i]>='0'&&s[i]<='9'||s[i]>='A'&&s[i]<='Z')
			++ans;
	cout<<ans;
	return 0;		
}
