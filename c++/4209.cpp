#include<iostream>
using namespace std;
int n,a[1005],b[505]={0},maxt=0;
long long k;

int main()
{
	cin>>n>>k;
	int p;
	for(int i=1;i<=n;++i)
		{
			cin>>a[i];
			if(a[i]>maxt) maxt=a[i],p=i;
		}
	int i=1,t=0,q=a[1];
	while(i<p&&t<k){
		if(q>a[++i]) ++t;else q=a[i],t=0;
	}
	if(t==k) cout<<q;else cout<<a[p];
	return 0;
}
