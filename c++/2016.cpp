#include<iostream>
using namespace std;

int main()
{
	int n,t,s=0;
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>t;
		s+=t;
	}
	if (s%n==0) cout<<n;else cout<<s%n;
	return 0;
}
