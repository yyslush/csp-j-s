#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int top,n,k=0,l=0,a[10005],b[10005];
char s[1000];
bool bo;
int main() 
{
    //freopen("test/strs5.in","r",stdin);
	cin>>n;
    for(int i=1; i<=n; i++) 
    {
        scanf("%s",s);
        bo=true;int p=0;
        for (int j=0;j<strlen(s);j++)
        switch(s[j])
        {
            
			case '{':a[++p]=1;break;
            case '[':a[++p]=2;break;
            case '(':a[++p]=3;break;
            case '<':a[++p]=4;break;
            case '>':a[++p]=5;break;
            case ')':a[++p]=6;break;
            case ']':a[++p]=7;break;
            case '}':a[++p]=8;break;          
        }
        top=0;b[top]=0;
        for (int j=1;j<=p;j++)
        {
            if(a[j]<5&&a[j]>=b[top]) b[++top]=a[j];      
            if(a[j]>=5)
                if(a[j]+b[top]!=9) {bo=false;break;	}  else  top--;          
        }
        if (top==0 && bo) cout<<"YES\n";
        else cout<<"NO\n";        
    }   
    //fclose(stdin);
    return 0;
}
