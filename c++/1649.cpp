#include <cstdio>  
#include <string>  
 
#define N 102  
using namespace std;
  
int main(){  
    int a[N][N];  
    int k,i,j,n,sum,maxx,i2,i1;  
  
    while(scanf("%d",&n)!=EOF){  
  
        for(i=0;i<=n;++i)a[0][i]=a[i][0]=0;  
        for(i=1;i<=n;++i){  
            for(j=1;j<=n;++j){  
                scanf("%d",&a[i][j]);  
                a[i][j]+=a[i-1][j];//这里就是矩阵预处理即列进行累加和  
            }  
        }  
        maxx = 2147483647;  
        for(i1=0;i1<n;++i1){//子矩阵的行的上边界  
            for(i2=i1+1;i2<=n;++i2){//子矩阵的行的下边界  
                sum = 0;  
                for(k=1;k<=n;++k){//转化为n个元素中找最大连续子序列的问题每个元素即为a[i2][k]-a[i1][k]  
                    if(sum<=0)sum = (a[i2][k]-a[i1][k]);  
                    else sum += (a[i2][k]-a[i1][k]);  
  
                    if(sum<maxx)maxx = sum;  
                }  
            }  
        }  
        printf("%d\n",maxx);  
    }  
    return 0;  
}  

