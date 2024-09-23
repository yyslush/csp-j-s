#include <iostream>
using namespace std;
int main() 
{
    int mid,x,y,p=2,k=0,ans=1;
    cin>>x>>y;
    if (y%x==0) 
	{
        mid=y/x;
    	while (mid>1)
    	{
    		if (mid%p==0)
			{
            	k++;
            	while (mid%p==0) mid/=p;
        	}	 
        	p++;
		}	
		for (int i=1;i<=k;i++) ans*=2;
    	cout<<ans;	
    }
    else    
    	cout<<0;   
	return 0; 
}
