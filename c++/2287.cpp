#include<iostream>  
#include<cstdio>  
#include<cstring>  
using namespace std;  
int f[1001], n;  
int a[1001][1001], cnt[10001];  
int findy(int x)  
{  
    if(f[x] == x) return x;  
    f[x] = findy(f[x]);  
    return f[x];  
}  
int main()  
{  
    while(cin>>n)  
    {  
        for(int i=1;i<=n;i++)  
        {  
            cnt[i]=1;  
            f[i]=i;  
        }  
        memset(a,0,sizeof(a));  
        for(int i=1;i<=n;i++)  
        {  
            cin>>a[i][0];  
            for(int j=1;j<=a[i][0];j++)  
                cin>>a[i][j];  
        }  
        int flag = 0;  
        for(int i=n;i>0;i--)  
        {  
            if(flag) break;  
            for(int j=1;j<=a[i][0];j++)  
            if(a[i][j]>i)  
            {  
                int x = findy(i);  
                int y = findy(a[i][j]);  
                if(x != y)  
                {  
                    f[y]=x;  
                    cnt[x] += cnt[y];  
                    if(cnt[x]>(n+1)/2)  
                    {  
                        cout << i << endl;  
                        flag = 1;  
                        break;  
                    }  
                }  
            }  
        }  
    }  
    return 0;  
}  
