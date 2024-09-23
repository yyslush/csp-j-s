#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
int main ()
{
	string s;
	//freopen("test/test5.in","r",stdin);
    //freopen("test/test5.out","w",stdout);
    cin>>s;
    for (int i=0;i<s.length();++i) 	
      	switch(s[i])
    	{
    		case 'A':cout<<'T';break;
    		case 'T':cout<<'A';break;
    		case 'G':cout<<'C';break;
    		case 'C':cout<<'G';break;
		}
	//fclose(stdin);   
   	//fclose(stdout);	
	return 0;
}

