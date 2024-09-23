#include<iostream>
using namespace std;
int n,k,ans=0;
int a[7];
void dfs(int j)//分到第j份
{
    if(n==0)return;//数字n分完
    if(j==k)//分到最后一份
    {
        if(n>=a[j-1])ans++;//最后一份的值不小于前一份的值，满足条件，分法+1
        return;
    }
    for(int i=a[j-1];i<=n/(k-j+1);i++)//第j份的上下界
    {
        a[j]=i;//第j份的值
        n-=i;
        dfs(j+1);//分第j+1份
        n+=i;
    }
}
int main()
{
    cin>>n>>k;
    a[0]=1;//初始条件，使a[1]的下界为1
    dfs(1);
    cout<<ans<<endl;
    return 0;
}

