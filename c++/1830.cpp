#include <cstdio>  

using namespace std;  
const int N=30005;

int w[N];

int n,k;
int check(int x)
{
    int sum=0;//记录当前队伍中的体力和
    int num=0;//记录当前分好的组数
    for(int i=1;i<=n;i++)
    {
        if(sum<x)  sum+=w[i];        
        else 
        {
            num++;
            sum=w[i];
            if(num>=k)
            return 1;
        }
    }
    if(sum>=x)  num++;
    if(num>=k) return 1; else  return 0;
}
int main()
{
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++) scanf("%d",&w[i]);
    int l=0,r=1e9+5;
    while(r-l>1)
    {
        int mid=(r+l)/2;
        if(check(mid)) l=mid; else  r=mid;
    }
    printf("%d\n",l);
    return 0;
}
