#include<iostream>
using namespace std;
int a[105],n,l,max1=0,max2=0;

int main()
{
	cin>>n;
	n-=1;
	for(int i=1;i<=n;++i) cin>>a[i];
	for(int i=1;i<n;++i)
		for(int j=n;j>i;--j)
		if(a[j]<a[j-1]) swap(a[j],a[j-1]);
	l=a[n];
	//for(int i=1;i<=n;++i) cout<<a[i]<<" ";	
	for(int i=1;i<=n;++i)	
		if(max1<a[i]-a[i-1])
			max1=a[i]-a[i-1];
		else  
			if(max2<a[i]-a[i-1])max2=a[i]-a[i-1];
	cout<<l-max1-max2;
	return 0;	
}
