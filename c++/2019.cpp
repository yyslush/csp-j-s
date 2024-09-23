#include<iostream>
#include<cstring>
using namespace std;

int n,m,count=0,a[25],b[10005];

void recursion(int k,int p,int s)
{
    if (k>m)
    {
        b[s]=1;
        return ;
    }
    for (int i=p; i<=n; i++)
        recursion(k+1,i+1,s+a[i]);
}
int main()
{
    cin>>n>>m;
    for (int i=1; i<=n; i++) cin>>a[i];       
    recursion(1,1,0);
    for (int i=0; i<=10000; i++)
        if (b[i]) count++;
    cout<<count;
    return 0;
}
