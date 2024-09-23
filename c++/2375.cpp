#include<iostream>
using namespace std;
int main()
{
	int n,a[4],b[4],m=100000001;
	cin>>n;
	for(int i=1;i<=3;i++) cin>>a[i]>>b[i];
	for(int i=1;i<=3;i++)
	{
		int x=(n-1) / a[i]+1;
		if (x*b[i]<m)  m=x*b[i];
	}
	cout<<m;
	return 0;
}
