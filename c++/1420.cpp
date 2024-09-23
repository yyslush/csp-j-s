#include<iostream>
using namespace std;

int n,k;
long long sum=0;

int main()
{
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>k;
		if(k==1)
		{
			int a,b;
			cin>>a>>b;
			sum+=(a+b)*2;
		} 
		if(k==2)
		{
			int a;
			cin>>a;
			sum+=a*4;
		} 
		if(k==3)
		{
			int a,b,c;
			cin>>a>>b>>c;
			sum+=(a+b+c);
		} 
	}
	cout<<sum;
	return 0;
}
