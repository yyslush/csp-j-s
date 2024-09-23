#include<iostream>
using namespace std;
int main()
{
    int n,m,a[101],s=0;
    cin>>n;
    for(int i=1;i<=n;++i)
		cin>>a[i];
    cin>>m;
    for(int i=1;i<=n;++i)    
        if(a[i]==m)s+=1;    
    cout<<s;
    return 0;
}
