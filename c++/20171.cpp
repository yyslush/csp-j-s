#include<iostream>
#include<cstring>
using namespace std;
char st[260],word[260];
int n,count=0;

int main()
{
	cin>>n;
	cin>>word;getchar();
	for(int i=1;i<=n;++i)
	{
		gets(st);
		cout<<strstr(st,word);
	}
	return 0;
}
