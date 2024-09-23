#include<iostream>
using namespace std;
int n;
int main()
{
	cin>>n;
	cout<<n+n%10*100+n/10%10*10+n/100;
	return 0; 
}
