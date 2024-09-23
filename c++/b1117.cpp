#include<iostream>
using namespace std;
int a[105];
int main()
{
	int n,maxn;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		if(a[x]==0)
		{
			a[x]=1;
			cout<<x<<" ";			
		}
	}
	return 0;
}
