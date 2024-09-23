#include<iostream>
#include<cstring>
using namespace std;

long long a[205],b[205],sum=0;
int n,m;

int main()
{
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	cin>>n>>m;
	for(int i=1;i<=n;++i)
	{
		int x;
		cin>>x;++a[x];
		//cout<<a[x]<<" ";
	}
	//cout<<endl;
	for(int i=1;i<=m;++i)
	{
		int x;
		cin>>x;++b[x];
		//cout<<b[x]<<" ";
	}
	//cout<<endl;
	for (int i=1;i<=100;++i)
		if (a[i]>0)
		for (int j=1;j<=100;++j)
		if((b[j]>0)&&(b[i+j]>0)) sum+=a[i]*b[j]*b[i+j]*(i+j);
	cout<<sum;
	return 0;	
	
}
