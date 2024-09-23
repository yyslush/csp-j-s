#include <bits/stdc++.h>
using namespace std ;

const int maxn = 6010, zhf = 0x7f7f7f7f ;
int f[maxn], a[1010], b[1010];

int main()
{
    int k,m,n,sum ;
    scanf("%d",&n) ; m=sum=0;
    for(int i=1;i<=n;i++)
	{
        scanf("%d%d",a+i,b+i);
        m+= max(a[i],b[i]) ; // 记录上面的和最大的可能值
        sum+=a[i] + b[i] ; // 记录总和
    }
    memset(f,zhf, sizeof(f)); // 初始化
    f[0]=0 ; // 边界
    for(int i=1;i<=n;i ++) 
        for(int j=m;j>=0;j--)
		{
            int ans=zhf; // 首先假设做不到
            if (j>=a[i]) // 显然是有可能做不到的
                ans=f[j-a[i]];
            if (j>=b[i])
                ans=min(ans,f[j-b[i]]+1);
            f[j]=ans ;
            // 注意，与普通01背包不同的是，在这里要强制选择转还是不转
        }
    for(int i=sum>>1;i;i--)
	{
        k=min(f[i],f[sum-i]);//找出最小
        if(k<zhf) 
		{
            printf("%d\n",k);
            return 0 ;
        }
    }
    return 0 ;
}
