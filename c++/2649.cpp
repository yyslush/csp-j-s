#include<cstdio>  
#include<cstring>  
#define MAXN 40005  
  
int arr[MAXN],ans[MAXN],len,n;    

  
int binary_search(int i){  
    int left,right,mid;  
    left=0,right=len;  
    while(left<right){  
        mid = left+(right-left)/2;  
        if(ans[mid]>arr[i]) right=mid;  
        else left=mid+1;  
    }  
    return left;  
}  
  
int main()  
{  
    scanf("%d",&n);  
    for(int i=1; i<=n; ++i)  
        scanf("%d",&arr[i]);  
         
    ans[1] = arr[1];  
    len=1;  
    for(int i=2; i<=n; ++i)
	{  
        if(arr[i]>ans[len])  
            ans[++len]=arr[i];  
        else
		{  
            int pos=binary_search(i);    
            ans[pos] = arr[i];  
        }  
    }
    printf("%d\n",len);      
    return 0;  
}  

