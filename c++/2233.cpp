#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
string s;
char c[256];
bool judge(string s)
{
    int top=-1,i=0;
    while (s[i]!='@')
    {
        if (s[i]=='(') 
		{
			++top;
			c[top]=s[i];
			cout<<top<<endl;
		}
        if (s[i]==')')
        {
            top--;
            cout<<top<<endl;
            if (top<-1) return 0;
        }
        i++;
    }
    if (top!=-1) return 0;
    else return 1; 
}
int main()
{
    cin>>s;
    if(judge(s)) printf("YES\n");
    else printf("NO\n");
    return 0;
}
