#include<iostream>
#include<string>
#include<cctype>
#include<cstdio>
using namespace std;
 
inline string change(string s)
{
    for (int i=0;i<s.length();++i) 
		if (i==0)s[i]=toupper(s[i]);else s[i]=tolower(s[i]);
    return s;
}
 
int main()
{
    string s;
    int n;
    freopen("test/test5.in","r",stdin);
    freopen("test/test5.out","w",stdout);
    cin>>n;
    for (int i=1;i<=n;++i)
    {
    	cin>>s;
    	s=change(s);
		cout<<s<<endl;
	}
    
    fclose(stdin);   
   	fclose(stdout);
    return 0;
}
