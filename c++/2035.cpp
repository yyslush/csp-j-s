#include<iostream>
using namespace std;
int a[255],n,v[250005],f[250005],c[250005],sum=0;

int main()
{
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i];
		sum+=a[i];
	}
	int hs=sum/2;
	for(int i=1;i<=n;++i)
		for(int j=hs;j>=a[i];--j)
		if(f[j]<f[j-a[i]]+a[i]) f[j]=f[j-a[i]]+a[i];
	c[0]=1;	
	for(int i=1;i<=n;++i)
		for(int j=hs;j>=a[i];--j) c[j]=(c[j]+c[j-a[i]])%1000000;
	cout<<sum-f[hs]-f[hs]<<endl<<c[f[hs]];
	return 0;	
}
