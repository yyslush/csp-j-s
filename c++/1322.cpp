#include<iostream>
using namespace std;
int a[10005];

int main()
{
	int n,k;
	cin>>n>>k;
	for (int i=1;i<=n;++i) cin>>a[i];
	for (int i=1;i<=k;++i)
		for(int j=i+1;j<=n;++j)
		if (a[i]<a[j])
		{
			int t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	for(int i=1;i<=k-1;++i) cout<<a[i]<<" ";cout<<a[k];
	return 0;	
}
