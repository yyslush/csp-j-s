#include<iostream>
#include<algorithm>
using namespace std;
int n,a[300058];
int main()
{
	cin>>n;
	for(int i=1;i<=n;++i) cin>>a[i];
	sort(a+1,a+n+1);
	int t;
	if(n%2==0) t=(a[n/2]+a[n/2+1])/2;else t=a[n/2+1];
	cout<<t;
	return 0; 
}
