#include<iostream>
#include<cstdio>
using namespace std;
long long a[1000005],maxn;
int m,n;
int main()
{
	cin>>n>>m;
	a[0]=0;
	for(int i=1;i<=n;++i)
	{
		int x;
		scanf("%d",&x);
		a[i]=a[i-1]+x;
	}
	for(int i=m;i<=n;++i)
		if(a[i]-a[i-m]>maxn) maxn=a[i]-a[i-m];
	printf("%0.2lf",maxn*1.0/m);
	return 0;	
}
