#include<iostream>
#include<cmath>
using namespace std;
int r,n,t,l=0,ans=0;
int main()
{
	cin>>r>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>t;
		l+=t;
		if(abs(l)<=r) ++ans;
	}
	cout<<ans;
	return 0;
}
