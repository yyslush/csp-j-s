#include<iostream>
#include<cstdio>
#include <cstring>
#define LL long long
#define M 2500000
using namespace std;

int n,sum[55][55];
int ans,x,tmp,top;
int h[M*2+10],st[55*55];

int main()
{
  scanf("%d",&n) ;
  memset(sum,0,sizeof(sum));
  ans=top=0;
  for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    {
      scanf("%d",&x);
      sum[i][j]=sum[i][j-1]+sum[i-1][j]-sum[i-1][j-1]+x;
    }
  for(int i=1;i<n;i++)
    for(int j=1;j<n;j++)    //这两个for穷举了交点
    {
      for(int k=1;k<=i;k++)
        for(int l=1;l<=j;l++)   //这两个是穷举区域里面的矩形
        {
          tmp=sum[i][j]+sum[k-1][l-1]-sum[k-1][j]-sum[i][l-1]+M;
          st[top++]=tmp;      //用哈希记录 ，用map超时orz
          h[tmp]++;
        }
      for(int k=i+1;k<=n;k++)
        for(int l=j+1;l<=n;l++)
        {
          tmp=sum[i][j]+sum[k][l]-sum[k][j]-sum[i][l]+M;
          ans+=h[tmp];
        }
      while(top)             //这里用了一个堆栈记录哈希的个数，直接清空对应的
        h[st[--top]]=0;     //如果直接清空整个数组，应该是会超时的
      for(int k=i+1;k<=n;k++)
        for(int l=1;l<=j;l++)
        {
          tmp=sum[i][l-1]+sum[k][j]-sum[i][j]-sum[k][l-1]+M;
          st[top++]=tmp;
          h[tmp]++;
        }
    for(int k=1;k<=i;k++)
      for(int l=j+1;l<=n;l++)
      {
        tmp=sum[i][l]+sum[k-1][j]-sum[k-1][l]-sum[i][j]+M;
        ans+=h[tmp];
      }
    while(top)   h[st[--top]]=0;
  }
  printf("%d\n",ans);
  return 0;
}
