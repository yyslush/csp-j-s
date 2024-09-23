#include<iostream>
using namespace std;
int main()
{
	int n,maxn=0,minn=2147482647;
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		int x;
		cin>>x;
		if (maxn<x) maxn=x;
		if (minn>x) minn=x;
	}
	cout<<maxn<<" "<<minn;
	return 0;
}
