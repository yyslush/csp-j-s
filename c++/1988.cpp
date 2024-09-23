#include<iostream>
#include<cstring>
using namespace std;
char s[15];

int main()
{
	int k,ans=0;
	cin>>s;
	for(int i=0;i<strlen(s);++i)
	{
		k=s[i]-48;
		if(k>4) k--;
		ans=ans*9+k; 
	}
	cout<<ans;
	return 0;
}
