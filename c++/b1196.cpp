#include<iostream>
using namespace std;
int main()
{
	int a,b,t,n,ans=0;
	cin>>t>>n;
	for (int i=1;i<=n;++i)
	{
		cin>>a>>b;
		if (t>=a&&t<=b) ++ans;
	}
	cout<<ans;	
	
	
}
