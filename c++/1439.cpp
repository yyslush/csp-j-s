#include<iostream>
using namespace std;
int a[100005]={0},n,ans=0,l=0;

int main()
{
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		int t;
		cin>>t;
		++a[t];
		if(l<t) l=t;
	}
	int i=1;
	while(i<=l-2)
	{
		int t=min(min(a[i],a[i+1]),a[i+2]);
		ans+=t;
		a[i+1]-=t;a[i+2]-=t;
		++i;
	}
	cout<<ans;
	return 0;
}
