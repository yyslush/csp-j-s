#include<iostream>
using namespace std;

int n,sum=0;

int main()
{
	cin>>n;
	for(int i=1;i<=n/2;++i)
	{
		int p=i,t=0;
		while(t<n)	t+=p++;
		if(t==n) sum+=1;
	}
	cout<<sum+1;
	return 0;
}
