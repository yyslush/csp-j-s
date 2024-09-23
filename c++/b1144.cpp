#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main ()
{
	//freopen("test/test5.in","r",stdin);
   // freopen("test/test5.out","w",stdout);
    string s;
    int i=0,p=0;
    getline(cin,s);
    while(i<s.length()) 
    	if (s[i]!=' ') 
		{
        	cout<<s[i];++i;p=0;			
		}
        else if (s[i]==' '&&p==0) 
		{
			cout<<s[i];++i;p=1;			
		}  else ++i;
   	//fclose(stdin);   
   	//fclose(stdout);	 
	return 0;
}

