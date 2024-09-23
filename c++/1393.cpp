#include<iostream>
#include<algorithm>
using namespace std;
int a[100005],b[100005],n,maxl=0;

int main()
{
	//freopen("test/test102.in","r",stdin);
	cin>>n;
	for(int i=1;i<=n;++i) cin>>a[i]>>b[i];
	sort(a+1,a+n+1);
	sort(b+1,b+n+1);
	int pa=1,pb=1,t=0;
	while(pa<=n)
	{
		if(a[pa]<=b[pb])++t,++pa;
		else if(a[pa]>b[pb]) --t,++pb;
		else ++pa,++pb;
		if(t>maxl) maxl=t;
	}
	cout<<maxl;
	//fclose(stdin);
	return 0;
}
