#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char c[256],stack[256];
bool judge(char c[])
{
    int top=0,i=0;
    for(int i=0;i<strlen(c);i++)
    {
        char x=c[i];
        switch(x)
        {
            case '(':
            case '[':
                stack[++top]=x;
                break;
            case ')':           
                if (stack[top]=='(') top--;
                else return 0;
                break;
            case ']':           
                if (stack[top]=='[') top--;
                else return 0;
                break;                  
        }   
         
    }
    if (top!=0) return 0;
    else return 1; 
}
int main()
{
    scanf("%s",c);
    if(judge(c)) printf("OK");
    else printf("Wrong");
    return 0;
}  
