#include<cstdio>  
#include<cstring>  
using namespace std;

long up[10000],down[10000],ck[10000];  
int main()  
{  
    long a,n,m,x,flag,i,j;  
    scanf("%ld %ld %ld %ld",&a,&n,&m,&x);  
    memset(ck,0,sizeof(ck));  
    up[1]=a;  flag=0;//up表示上车人数   down表示下车人数   ck表示乘客人数  
    down[1]=0; ck[1]=a;  
    for(i=0;i<=m;i++)  
    {  
       up[2]=i,down[2]=i,ck[2]=ck[1];//乘客总是递增的，最后下来m个人所以第二站下车人数只能在0到m之间  
       for(j=3;j<n;j++)  
       {  
           up[j]=up[j-1]+up[j-2];  
           down[j]=up[j-1];  
           ck[j]=ck[j-1]+up[j-2];  
       }  
       if(ck[n-1]==m){  printf("%ld\n",ck[x]); flag=1;  break;  }  //如果n-1站的人数等于m跳出  
       
    }  
    if(!flag)  printf("No answer.\n");   
    return 0;  
}  
