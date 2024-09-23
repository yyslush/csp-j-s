#include<iostream>
using namespace std;
int a[35],n,heigh;

int main()
{
	cin>>n;
	for(int i=1;i<=n;++i) cin>>a[i];
	for(int i=1;i<n;++i)
		for(int j=n;j>i;--j)
		if(a[j]<a[j-1]) swap(a[j],a[j-1]);
	cin>>heigh;
	for(int i=1;i<=n;++i) cout<<a[i]<<" ";
	int p=1;
	while(heigh!=a[p]) ++p;
	cout<<p<<" ";
	while(heigh==a[p]) ++p;
	cout<<p-1;
	return 0;	
}
