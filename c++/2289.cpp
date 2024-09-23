#include<cstdio>  
#include<cstring>
#define Max 10004  
int cost[Max],v[Max],dp[Max];  
int f[Max];  
int t_cost[Max],t_v[Max];  
int n,m,w;  
inline int max(int a,int b)  
{  
    return a>b?a:b;  
}  
void init()  
{  
    int i;  
    memset(dp,0,sizeof(dp));  
    for(i=1;i<=n;i++)  
    {  
        f[i]=i;  
        t_cost[i]=cost[i];  
        t_v[i]=v[i];  
    }  
}  
int find(int x)  
{  
    return x==f[x]?x:find(f[x]);  
}  
void Union(int x,int y)  
{  
    int a=find(x),b=find(y);  
    f[b]=a;  
    t_cost[a]+=t_cost[b];  
    t_v[a]+=t_v[b];  
}  
void ZeroOnePack(int cost,int weight)  
{  
    int i;  
    for(i=w;i>=cost;i--)  
    {  
        dp[i]=max(dp[i],dp[i-cost]+weight);  
    }  
}  
  
int main()  
{  
    //freopen("b.txt","r",stdin);  
    int i,a,b;  
    while(scanf("%d %d %d",&n,&m,&w)==3)  
    {  
        for(i=1;i<=n;i++)  
            scanf("%d %d",&cost[i],&v[i]);  
        init();  
        while(m--)  
        {  
            scanf("%d %d",&a,&b);  
            Union(a,b);  
        }  
        for(i=1;i<=n;i++)  
            if(f[i]==i)  
            {  
                ZeroOnePack(t_cost[i],t_v[i]);  
            }  
            printf("%d\n",dp[w]);  
    }  
    return 0;  
}  
