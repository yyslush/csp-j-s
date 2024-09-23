#include<iostream>
#include<string>
#include<cctype>
#include<cstdio>
using namespace std;
 
inline string change(string s)
{
    for (int i=0;i<s.length();++i) 
		if(s[i]>=65&&s[i]<=90) s[i]=tolower(s[i]);else s[i]=toupper(s[i]);
    return s;
}
 
int main()
{
    string s;
    //freopen("test/test1.in","r",stdin);
    //freopen("test/test1.out","w",stdout);
    getline(cin,s);    
	s=change(s);
    cout<<s;
    //fclose(stdin);   
   	//fclose(stdout);
    return 0;
}
