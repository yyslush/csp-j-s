#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int p=0,s[200000];
string a;
int main()
{
	//freopen("test/del9.in","r",stdin);
    //freopen("test/del9.out","w",stdout);
	cin>>a;
	s[0]='0';	
    for (int i=0;i<=a.length()-1;++i)
	{
		if (a[i]!='c')
		{
			if (a[i]!='b') {s[++p]=a[i];}
				}
		else
		{
			if (a[i]=='c'&&s[p]=='a'&&p>0)  --p; else if ((a[i]=='c'&&s[p]!='a')) s[++p]=a[i];		
		}			
	}	
	for (int j=1;j<=p;++j) printf("%s",&s[j]);
	//fclose(stdin);   
   	//fclose(stdout);
   	return 0;
}
