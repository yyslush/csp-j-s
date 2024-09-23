#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int n,b,a[10005],st[15];
	cin>>n;
	for (int i=1;i<=n;++i) cin>>st[i];
	cin>>b;
	memset(a,0,sizeof(a));
	for (int i=1;i<=n;++i)
		for(int j=1;j<=b-1;++j) a[j*st[i]]=1;
	//for (int i=1;i<=10;++i)	cout<<a[i]<<" ";cout<<endl;
	int t=0;
	for (int i=1;i<=10000;++i)
		if (a[i]==1) ++t;
	cout<<t+1;
	return 0;		
}
