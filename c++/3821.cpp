#include<cstdio>  
int a[101][101],f[101],b[101];  
int n,ans;  
char c;  
int find(int x)  
{  
    if (f[x]>-1) return f[x];  
    f[x]=b[x];  
    for (int i=1;i<=a[x][0];++i)  
        if (b[x]+find(a[x][i])>f[x])  
           f[x]=find(a[x][i])+b[x];  
    return f[x];  
}  
int main()  
{  
    scanf("%d",&n);  
    for (int i=1;i<=n;++i)  
    {  
        scanf("%d",&b[i]);  
        scanf("%c",&c);  
        while (c!=10)  
        {  
              scanf("%d",&a[i][++a[i][0]]);  
              scanf("%c",&c);  
        }  
    }  
    for (int i=1;i<=n;++i) f[i]=-1;  
    for (int i=1;i<=n;++i)  
        if (find(i)>ans)  
           ans=find(i);  
    printf("%ld",ans);  
    return 0;  
}  
