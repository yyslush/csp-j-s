#include<iostream>
using namespace std;
int main()
{
	int l;
	cin>>l;
	if ((l/1.2==l/3.0+50)) cout<<"All";
	else if ((l/1.2>l/3.0+50)) cout<<"Bike";
	else if ((l/1.2<l/3.0+50)) cout<<"Walk";
	return 0;
}
