#include<iostream>
#include<algorithm>
using namespace std;
long long s=0;
int a[100005];
int main()
{
	int n,t=1;
	cin>>n;
	for (int i=0;i<n;++i) cin>>a[i];
	sort(a,a+n);
	for (int i=n-1;i>=0;--i)
	{
		if (t==3) t=0;else s+=a[i];		
		++t;		
	}
	cout<<s;
	return 0;
	
}
