#include<iostream>
using namespace std;
int n,f[805]={0};

int main()
{
	cin>>n;
	f[0]=1;
	for(int i=1;i*i<n;++i)
		for(int j=i*i;j<=n;++j) f[j]+=f[j-i*i];
	cout<<f[n];
	return 0;	
}
