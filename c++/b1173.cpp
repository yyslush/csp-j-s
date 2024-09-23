#include<iostream>
#include<cmath>
using namespace std;
bool su(int);
int main ()
{
    int n,i,ans=0,a,b; 
    cin>>n;    
    for(i=11;i<=n;++i)    
    	if (su(i))
    	{
    		a=i%10;
    		b=i/10;
    		while (b/10>0) b/=10;
    		if (a==b) ++ans;
		}
    cout<<ans;  
    return 0;
}
bool su(int n)
{
    for (int j=2;j<=(int(sqrt(n)));++j)
        if (n%j==0) return false;
    return true;            
}
