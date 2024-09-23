#include<iostream>
#include<algorithm>
using namespace std;
int a[100005];
int main()
{
	int n,m;
	freopen("test/test10.in","r",stdin);
	cin>>n>>m;
	for (int i=0;i<n;++i) cin>>a[i];
	sort (a,a+n);	
	int h=0,t=0;
	for(int i=n-1;i>=0;--i)
	{
		++t;
		if (t%m==1) h+=a[i];
	}
		
	cout<<h;
	fclose(stdin);
	return 0;	
}
