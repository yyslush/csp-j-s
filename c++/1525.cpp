#include<cstdio>
#include<cmath>
using namespace std;

int main()  
{  
    int n;  
    scanf("%d",&n);
    int k=(int)floor((sqrt(8.0*n+1)-1)/2-1e-9)+1;  
    int s=k*(k+1)/2;  
    if(k%2!=0)  
    	printf("%d/%d\n",s-n+1,k-s+n);  
    else  
        printf("%d/%d\n",k-s+n,s-n+1);  
    return 0;  
}  
