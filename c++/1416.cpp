#include<iostream>
#include<algorithm>
using namespace std;

int a[1005],n;
double av,sum=0;

int main()
{
	cin>>n;
	int p=0;
	for(int i=1;i<=n;++i)
	{
		int t;
		cin>>t;
		if(t<=100 && t>=1) a[++p]=t,sum+=t;
	}
	printf("%0.2lf\n",sum*1.0/p);
	sort(a+1,a+p+1);
	n=int(p*0.1+0.5);
	for(int i=1;i<=n;++i) sum-=(a[i]+a[p-i+1]);
	//cout<<p<<" "<<k<<" "<<sum<<endl;
	printf("%0.2lf",sum*1.0/(p-2*n));
	return 0;
}
