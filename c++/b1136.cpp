#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
int main ()
{
	char s[255];
	//freopen("test/test5.in","r",stdin);
    //freopen("test/test5.out","w",stdout);
    gets(s);
    for (int i=0;i<strlen(s);++i) 	
      	if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
      	{
      		if ((s[i]>='a'&&s[i]<='y'))	s[i]=char(int(s[i])+1);
      		else if (s[i]=='z') s[i]='a';
      		if ((s[i]>='A'&&s[i]<='Y'))	s[i]=char(int(s[i])+1);
      		else if (s[i]=='Z') s[i]='A';
		}
	cout<<s;	
	//fclose(stdin);   
   	//fclose(stdout);	
	return 0;
}

