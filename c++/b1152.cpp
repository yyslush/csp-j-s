#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main ()
{
	//freopen("test/test5.in","r",stdin);
    //freopen("test/test5.out","w",stdout);
    string s,s1; 
	char c;   
    int i,j=0,max=0,n;    
    getline(cin,s);     
    for(i=0;i<s.length();++i)
    {
    	if (s[i]>=65&&s[i]<=90||s[i]>=97&&s[i]<=122) ++j ;else 
		{
			if (j>max) 
			{ 
				max=j;
				s1=s.substr(i-j,j);				
			}
			j=0;
		}	
	}
	if (j>max) s1=s.substr(i-j,j);
    cout<<s1;
    //fclose(stdin);   
   	//fclose(stdout);	 
	return 0;
}

