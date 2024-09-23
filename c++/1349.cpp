#include<iostream>
using namespace std;
int n,cm=0,sm=0,em=0,s=0;
int main()
{
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		int x,y,z;
		cin>>x>>y>>z;
		if(x>cm) cm=x;
		if(y>sm) sm=y;
		if(z>em) em=z;
		if(x+y+z>s) s=x+y+z;
	}
	cout<<s<<" "<<cm<<" "<<sm<<" "<<em;
	return 0;	
}
