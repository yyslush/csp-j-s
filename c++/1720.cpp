#include<iostream>  
#include<cstring>   
using namespace std;  
int main()  
{  
    int n;  
    int a=0,b=0,w=0,m=0;  
    char c='0';  
    char st[1000];  
    cin>>n;  
    cin>>st;  
    memcpy(st+n,st,n);  
    int i;  
    for(i=0;i<=2*n;i++)  
    {  
        if(st[i]=='w')  
        {  
            b++;  
            w++;//记录连续w的数目  
        }  
        else if(st[i]==c)  
        {  
            b++;//记录前一个b/r连续的数目  
            w=0;  
        }  
        else//此时找的一个结果，开始统计数目  
        {  
            m=max(a+b,m);//找出最大的  
            a=b-w;  
            b=w+1;  
            w=0;  
            c=st[i];//暂时存下需要比较的新的b/r  
        }  
    }  
    m=max(m,a+b);  
    m=min(m,n);  
    cout<<m;  
    return 0;  
}  

