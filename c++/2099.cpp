#include<iostream>
using namespace std;

int main()
{
	int n,a,b;
	long long ans=0;
	cin>>n>>a;
	for(int i=2;i<=n;++i)
	{
		cin>>b;
		ans=ans+max(a,b);
		a=b;
	}
	cout<<ans;
	return 0;
}
