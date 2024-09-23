#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long a,b;
	cin>>a>>b;
	cout<<abs(a+b)-abs(a-b)-1;
	return 0;	
}
