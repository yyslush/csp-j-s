#include<iostream>
using namespace std;
int a[1005],s,t,n;
bool d[1005]={false};

int main()
{
	cin>>n>>s>>t;
	for(int i=1;i<=n;++i) cin>>a[i];
	for(int i=s+1;i<=n;++i)
	{
		int p=1,q=0,j,k;
		if(i-t>0) p=i-t;
		for(j=i-s;j>=p;--j)		
			if(d[j]==false&&a[j]>q) q=a[j],k=j;		
		a[i]+=q;
		d[k]=true;		 
	}
	cout<<a[n];
	return 0;
}
