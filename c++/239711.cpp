#include <iostream>
#include <algorithm> 
using namespace std;
long long px[101],py[101];
int gcd(int a,int b)
{
    if (a%b==0) return b;
    else return gcd(b,a%b);
}
 
int check(int n, int k,int x,int y)
{
    if (x==y) return 1;
    int tx=0,ty=0;
    for (int i=1; i*i<=x; i++)
        if (x%i==0)
        {
            if (i>k) px[tx++]=i;
            if (x/i>k) px[tx++]=x/i; 
        }
    for (int i=1; i*i<=y; i++)
        if (y%i==0)
        {
            if (i>k) py[ty++]=i;
            if (y/i>k) py[ty++]=y/i;
        }
    for (int i=0; i<tx; i++) //cout<<px[i]<<endl;cout<<endl;
    for (int j=0; j<ty; j++) //cout<<py[j]<<endl;cout<<endl;
    if ( px[i]/gcd(px[i],py[j])*py[j]<=n) return 1;              
    return 0;    
}
int main()
{
    int t;
    long long n,k,x,y,ans=0;
    cin>>t;
    for (int i=1; i<=t; i++)
    {
        cin>>n>>k>>x>>y;
        //cout<<gcd(x,y);
        if (check(n,k,x,y)) cout<<"Possible"<<endl;
        else  cout<<"Impossible"<<endl;     
    }
    return 0;
}
