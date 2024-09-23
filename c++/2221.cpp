#include<iostream>
using namespace std;
int f[125],a[100005];
int n,x;
int main()
{
    
	cin>>n;
    for (int i=1; i<=n; ++i) 
    {
        cin>>x;
        ++f[x];
        for (int j=x+1; j<=120; ++j) a[i]+=f[j];       
    }
    for (int i=1; i<n; i++) cout<<a[i]<<" ";
    cout<<a[n]<<endl;   
    return 0;
}
