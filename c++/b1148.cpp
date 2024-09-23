#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main ()
{
	freopen("test/test1.in","r",stdin);
    freopen("test/test1.out","w",stdout);
    string s;
    int i,j,b[1005],a[1005];
    getline(cin,s);
    b[0]=1;j=0;a[0]=s[0]-48;    
    for (i=1;i<s.length();++i) 	
    	if (s[i]==s[i-1]) 	b[j]+=1;
		else 
		{
			a[++j]=s[i]-48;
			b[j]=1;		
		}
	for(int l=0;l<=j;++l) cout<<b[l]<<a[l];	
    fclose(stdin);   
   	fclose(stdout);	 
	return 0;
}

