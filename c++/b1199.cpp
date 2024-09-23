#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
	int a,b;
	char s[10];
	cin>>a>>b;
	for (int i=a;i<=b;++i)
	{
		sprintf(s,"%o",i);	
		bool f=true;
		for(int j=0;j<=strlen(s)/2;++j)
			if (s[j]!=s[strlen(s)-j-1])
			{
				f=false;
				break;
			}
		if (f) 
		{
			cout<<i;
			break;
		}
	}
	return 0;
}
