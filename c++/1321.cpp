#include<iostream>
#include<string>
using namespace std;
string s,ns;

int main()
{
	getline(cin,s);
	int p=-1,l=s.length();	
	for (int i=0;i<l;++i)
		if(s[i]>='0'&&s[i]<='9') 
		{
			++p;
			ns[p]=s[i];
		}
	for(int i=0;i<=p;++i) cout<<ns[i];
	return 0;		
}
