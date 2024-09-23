#include<cstdio>  
#include<cstring>  
#include<iostream>  
#include<algorithm>  
#include<iomanip>
using namespace std;  
#define N 300  
int dp[N][N];//dp[i][j]表示a的前i个和b的前j个相同后的最短距离  
char a[N],b[N];  
void match(char *s,char *s1,int lena,int lenb)  
{  
    int i,j,inserts,deletes,replaces;  
    for(i=1;i<=lena;i++)  
    {  
        dp[i][0]=i;  
    }  
    for(j=1;j<=lenb;j++)  
    {  
        dp[0][j]=j;  
    }  
    for(i=1;i<=lena;i++)  
    {  
        for(j=1;j<=lenb;j++)  
        {  
            inserts=dp[i][j-1]+1;//插入  
            deletes=dp[i-1][j]+1;//删除  
            replaces;//替换  
            if(s[i-1]==s1[j-1])  
            {  
                replaces=dp[i-1][j-1];  
            }  
            else  
            {  
                replaces=dp[i-1][j-1]+1;  
            }  
            dp[i][j]=min(min(inserts,deletes),replaces);  
        }  
    }
	/*for(i=1;i<=lena;i++)
	{
		cout<<setw(3)<<b[i];
		for (j=1;j<=lenb;j++) cout<<setw(3)<<dp[i][j];cout<<endl;			
	}*/
    cout<<dp[lena][lenb]<<endl;  
}  
int main()  
{  
    int la=1,lb=1;  
    bool f=false;
    char ch;
    //freopen("test/shendeng7.in","r",stdin);
    cin>>ch;
    while(ch!='?')  
    {  
         if(ch=='#') f=true;
         if(not(f)) a[la++]=ch;else  if(ch!='#') b[lb++]=ch;
         cin>>ch;           
    }  
    //for (int i=1;i<=la;++i) cout<<setw(3)<<a[i];cout<<endl;  
    //fclose(stdin);
	match(a,b,la,lb);  
    return 0;  
}  
