#include<iostream> 
using namespace std; 
long long m,n,ans=0; 
int main() 
{ 
	cin>>m>>n; 
    for(int i=m;i<=n;++i)
    {
    	if (i%2!=0) ++ans;
    	if (i%4==0) ++ans;
    	
	}
    cout<<ans;   
    return 0; 
}  
