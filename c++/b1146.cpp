#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main ()
{
    //freopen("test/test5.in","r",stdin);
    //freopen("test/test5.out","w",stdout);
    string s,s1;
    int i,p=0,lm=0;
    getline(cin,s);
    for (i=0;i<s.length();++i) 
        if ((s[i]>=65&&s[i]<=90)||(s[i]>=97&&s[i]<=122)) ++p;
        else  if (p>lm)
        {
            lm=p;
            s1=s.substr(i-p,p);
            p=0;            
        }  else p=0;
    if (p>lm) s1=s.substr(i-p,p);    
    cout<<s1;
    //fclose(stdin);   
    //fclose(stdout);    
    return 0;
}
