#include<iostream>
using namespace std;
int a[10005],n;
int main()
{
	int k,t=0,m=1;
	//freopen("test/dream9.in","r",stdin);
	cin>>n>>k;
	for(int i=1;i<=n;++i)
	{
		int x;
		cin>>x;
		if (a[x]<m) {++t;++a[x];}
		if (t%k==0)++m;
	}
	//for(int i=1;i<=k;++i) cout<<a[i]<<" ";
	//cout<<endl;
	cout<<m;
	//fclose(stdin);
	return 0;
}
