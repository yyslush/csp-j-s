#include<iostream>
using namespace std;
int n,x,y,g[105],s1,s2;
int main()
{
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        cin>>x>>y;
        if (x!=y) 
        g[10*x+y]++;
    }
    s1=g[12]+g[31]+g[23];
    s2=g[21]+g[13]+g[32];   
    cout<<max(s1,s2)<<endl; 
    return 0;
}
