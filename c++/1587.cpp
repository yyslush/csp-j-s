#include<iostream>
using namespace std;
int main()
{
	int a[30],s,t,n;
	string st;
	cin>>s>>t>>n;
	cin>>st;
	for (int i=1;i<=n;++i) a[i]=st[i-1]-96;
	for (int i=1;i<=5;++i)
	{
		int j=n;
		while(j>0 && (a[j]==t-n+j)) --j;
		if (j==0) break;
		++a[j];
		for (int k=j+1;k<=n;++k) a[k]=a[k-1]+1;
		for (int k=1;k<=n;++k) cout<<char(a[k]+96);
		cout<<endl;
	}
	return 0;
}
