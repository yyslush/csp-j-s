#include<cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
 
int num[100]={1},l=1,ans[100]={1};

int main()
{
    int n,lc,i;
    scanf("%d",&n);
    for(int x=2;x<=n;x++)
    {
        for(i=lc=0;i<l;)
        {
            num[i]=num[i]*x+lc;
            lc=num[i]/10;
            num[i++]%=10;
            if(i==l&&lc)l++;
        }
        for(i=0;i<l;i++)ans[i]+=num[i];
    }
    for(int i=0;i<l;)
    {
        ans[i+1]+=ans[i]/10;
        ans[i++]%=10;
        if(i==l&&ans[i])l++;
    }
    for(int i=l-1;i>=0;i--)
    printf("%d",ans[i]);
}
/************************
