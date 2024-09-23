#include<iostream>
#include<cstring>
using namespace std;
int f[2000005];
int main()
{
	int k,n,stamp[55];
	cin>>k>>n;
	for(int i=1;i<=n;i++) cin>>stamp[i];
	memset(f,1,sizeof(f));
	f[0]=0;
    for (int i=1;i<=2000000;i++)
	  {
	  	for(int j=1;j<=n;j++)
	  	if((i-stamp[j]>=0)&&f[i-stamp[j]]+1<f[i]) f[i]=f[i-stamp[j]]+1;
	  	if(f[i]>k)
		  {
		  	cout<<i-1;
		    return 0;	
		  }	
	  }

	//return 0;  
}
