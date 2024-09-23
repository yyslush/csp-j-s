#include<iostream>
using namespace std;
int n,a[105],maxl=1e8;
int main()
{
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i];
		if(maxl>a[i]) maxl=a[i];
	}
	int p=1;maxl++;
	while(p<=n)
	{
		p=1;
		--maxl;
		while(a[p]%maxl==0&&p<=n) ++p; 
	}
	cout<<maxl;
	return 0;
}
