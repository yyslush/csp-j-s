#include<iostream>
using namespace std;

int n;
long long a1=1,a2=2,a;

int main()
{
	cin>>n;
	for (int i=1;i<=n-2;++i)
	{
		a=(a1+a2)%1000000007;
		a1=a2;
		a2=a;
	}
	cout<<a%1000000007;
	return 0;
}
