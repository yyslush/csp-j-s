#include<cstdio>  
#include<algorithm>    
using namespace std;  
struct sgm  
{  
    int l,r;  
} a[40010];  
bool cmp(sgm A,sgm B)  
{  
    if(A.r!=B.r)  
        return A.r<B.r;  
    else  
        return A.l>B.l;  
}  
int main()  
{  
    int n,i,j,t;  
    while(~scanf("%d",&n))  
    {  
        for(i=0; i<n; i++)  
        {  
            scanf("%d%d",&a[i].l,&a[i].r);  
            if(a[i].l>a[i].r)  
            {  
                t=a[i].l;  
                a[i].l=a[i].r;  
                a[i].r=t;  
            }  
        }  
        sort(a,a+n,cmp);          
        int s=1,x=a[0].r;  
        for(i=1; i<n; i++)  
        {  
            if(x<a[i].l)  
            {  
                x=a[i].r;  
                s++;  
            }  
        }  
        printf("%d\n",n-s);  
    }  
    return 0;  
}  
