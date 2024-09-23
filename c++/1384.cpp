#include<iostream>
using namespace std;
int n;
int main()
{
	cin>>n;
	int p=0;
	while (n>0)
	{
		++p;
		n/=2;
	}
	cout<<p;
	return 0;
}
