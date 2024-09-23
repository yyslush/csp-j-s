#include<iostream>
#include<string>
#include<cctype>
#include<cstdio>
#include<cstring>
using namespace std;
 
inline string change(string s)
{
    for (int i=0;i<s.length();++i) 	s[i]=tolower(s[i]);
    return s;
}
 
int main()
{
    string s1,s2;
    
    //freopen("test/test5.in","r",stdin);
    //freopen("test/test5.out","w",stdout);
    getline(cin,s1);
    s1=change(s1);
    cout<<s1<<endl;
    getline(cin,s2);
    s2=change(s2);
    cout<<s2<<endl;
   	if( s1>s2) cout<<">";
   	else if(s1==s2) cout<<"=";
   	else cout<<"<";
	      
    //fclose(stdin);   
   	//fclose(stdout);
    return 0;
}
