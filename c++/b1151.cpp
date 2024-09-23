#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main ()
{
	freopen("test/test1.in","r",stdin);
    freopen("test/test1.out","w",stdout);
    string s; 
	char c;   
    int j=1,max=0;
    cin>>s;     
    for(int i=1;i<=s.length();++i)
    {
    	if (s[i]==s[i-1]) ++j ;else j=1;
		if (j>max) { max=j;c=s[i]; }
	}
    cout<<c;
    fclose(stdin);   
   	fclose(stdout);	 
	return 0;
}

