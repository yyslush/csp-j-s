#include<iostream> 
using namespace std; 
int a[20]; 
int main() 
{ 
    int m; 
    long long n,t,ans=0; 
    cin>>n>>m; 
    t=1; 
    while (n>0) 
    { 
        int tt=n%10; 
        if (t==1) 
        { 
            if (tt>=m) ans=m; 
            else ans=tt; 
            //cout<<tt<<" "<<ans<<endl;
        } 
        else
    	{
    		 ans=ans + tt*t; 
    		 //cout<<tt<<" "<<ans<<endl;
		}
           
        t=t*(m+1); 
        n/=10; 
    } 
    cout<<ans<<endl; 
    return 0; 
} 

