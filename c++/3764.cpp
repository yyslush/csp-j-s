#include<iostream>
using namespace std;
int main()
{
	int ans=0,m,n,a[105];
	cin>>m>>n;
	for (int i=1;i<=n;++i)cin>>a[i];
	for (int i=1;i<=n-1;++i)
		for(int j=1;j<=n-i;++j)
		if (a[j]<a[j+1])
		{
			int t;
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		}	
	for (int i=1;i<=m;++i) ans=ans+a[i]-a[n-i+1];
	cout<<ans;
	return 0;	
}
