#include<stdio.h>
int f[4003],h[4003],n,i,j,t,ans;
int max(int a,int b)
{
    return a>b?a:b; 
}
int main()
{
    int k=0;
    while(scanf("%d",&k)!=EOF)
    {
        n++;
        h[n]=k;
    }
    for (i=1;i<=n;i++)
    {
        t=0;
        for (j=1;j<i;j++)
          if (h[j]>=h[i])
            t=max(t,f[j]);
          f[i]=t+1;
    }
    for (i=1;i<=n;i++)
      ans=max(ans,f[i]);
     printf("%d",ans);
 }
