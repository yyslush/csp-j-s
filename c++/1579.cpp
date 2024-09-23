#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	
	int a[15],p=-1,n,k;
	long long s=0;
	cin>>k>>n;
	while(n>0)
	{
		a[++p]=n%2;
		n/=2;		
	}
	for(int i=0;i<=p;++i)
		if (a[i]==1) s+=pow(k,i);
	cout<<s;
	return 0;		
}
