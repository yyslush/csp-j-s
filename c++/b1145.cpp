#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main ()
{
	//freopen("test/test5.in","r",stdin);
    //freopen("test/test5.out","w",stdout);
    string s;
    int i,p=0;
    getline(cin,s);
    for (i=0;i<s.length();++i) 
    	if (s[i]!=' ') ++p;
		else if (p!=0) 
		{
			if (i<s.length()-1)cout<<p<<",";else cout<<p;p=0;			
		}  else p=0;
	if (p!=0)cout<<p;
   	//fclose(stdin);   
   	//fclose(stdout);	 
	return 0;
}

