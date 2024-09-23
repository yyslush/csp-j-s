#include<iostream>
using namespace std;

double a[33];
int n;

int main()
{
	a[1]=5.2360679774997896;
	for(int i=2;i<=32;++i) a[i]=a[i-1]*a[1];
	for(int i=1;i<=32;++i) cout<<a[i]<<endl;
	//cin>>n;
	
}
