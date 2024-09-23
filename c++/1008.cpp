#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d,e;
	cin>>a>>b>>c>>d>>e;
	a=a /3;
	e+=a;
	b=(b+a) /3;	
	a+=b;
	c=(c+b)/3;
	b+=c;
	d=(d+c)/3;
	c+=d;
	e=(d+e)/3;
	a+=e;
	d+=e;
	cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;  
 	return 0;
}
