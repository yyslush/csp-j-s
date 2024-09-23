#include<iostream>
using namespace std;

int n;

int main()
{
	long long a,b,c;
	cin>>a;
	b=a*(a%10000);
	c=a*(a/10000);
	cout<<c<<" "<<b;
	return 0;
}
