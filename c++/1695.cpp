#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,i,j,t=0;
	cin>>n;
	cout<<n<<"=";
	int p=sqrt(n);
	for(i=2;i<=p;++i)
		while(n%i==0) 
		{
			if(t==0) cout<<i,t=1;else cout<<"*"<<i;
			n/=i;	
		}
	if(t==0&&n>1) cout<<n;	
	if(t==1&&n>1) cout<<"*"<<n;	
	return 0;
}

