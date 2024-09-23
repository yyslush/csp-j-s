#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char s[100005];
int main ()
{
	freopen("test/test5.in","r",stdin);
    //freopen("test/test5.out","w",stdout);
    int l,t=0;
	char s1[501],s2[501];
    float a;
    cin>>a;
    scanf("%s%s",s1,s2);
    for(int i=0;i<strlen(s1);++i)
    	if (s1[i]==s2[i]) ++t;
    cout<<a*100<<" "<<t*1.0/strlen(s1)*100<<endl;
   	if (a*100<=int(t*1.0/strlen(s1)*100))cout<<"yes";else cout<<"no";	
	fclose(stdin);   
   	//fclose(stdout);	
	return 0;
}

