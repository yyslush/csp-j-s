#include<iostream>
using namespace std;
int main()
{
	int n,a;
	cin>>n;
	a=n%10*1000+n/10%10*100+n/100%10*10+n/1000;
	cout<<n+a;
	return 0;
}
