#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
int main ()
{
	int l=1;
	string s;
	//freopen("test/test1.in","r",stdin);
    //freopen("test/test1.out","w",stdout);
    cin>>s;
    if((s[0]>='a'&&s[0]<='z')||(s[0]>='A'&&s[0]<='Z'))
    {
    	for (int i=1;i<s.length();++i) 	
			if (((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))||(s[i]>='0'&&s[i]<='9')||s[i]=='_')++l;
    }
    if (l==s.length()) cout<<"yes";else cout<<"no";
    //fclose(stdin);   
   	//fclose(stdout);	
	return 0;
}

