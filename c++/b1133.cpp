#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main ()
{
	int l;
	char s[101];
	freopen("test/test1.in","r",stdin);
    freopen("test/test1.out","w",stdout);
    gets(s);
    for (int i=0;i<strlen(s)-1;++i) 
	{
		cout<<char(int(s[i])+int(s[i+1]));
	}
	
    cout<<char(int(s[strlen(s)-1])+int(s[0]));

	fclose(stdin);   
   	fclose(stdout);	
	return 0;
}

