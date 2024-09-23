#include<cstdio>  
#include<iostream>  
int n,m,dis,y;  
int a[15001],b[15001],c[15001],d[15001];
int h[40001],w[15001];
int main()  
{  
    scanf("%d%d",&n,&m);  
    for(int i=1;i<=m;i++){scanf("%d",&h[i]);w[h[i]]++;}  
      
    for(int i=1;i<=n/9;i++)
    {  
        dis=8*i+1;y=0;
        for(int j=n-9*i-1;j>=1;j--)
        {  
            y+=w[j+dis]*w[j+dis+i];
            a[j]+=y*w[j+i+i];  
            b[j+i+i]+=y*w[j];  
        }  
        dis=9*i+1;y=0; 
        for(int j=9*i+2;j<=n;j++) 
        {  
            y+=w[j-dis]*w[j-dis+i+i]; 
            c[j-i]+=y*w[j];  
            d[j]+=y*w[j-i];  
        }  
    }  
    for(int i=1;i<=m;i++)  
    {  
        printf("%d %d %d %d\n",a[h[i]],b[h[i]],c[h[i]],d[h[i]]);  
    }  
}  
