#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n,a[105];
	memset(a,0,sizeof(a));
	cin>>n;
	a[0]=1;
	for(int i=1;i<=n;++i)
		for(int j=1;j<=n;++j)
		if(j>=i) a[j]=a[j]+a[j-i];
	cout<<a[n];
	return 0;	
}
