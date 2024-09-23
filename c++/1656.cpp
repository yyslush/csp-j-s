#include<iostream>
using namespace std;

int main()
{
	int x,y;
	int x1=0,y1=0;	
	for(int i=1;i<=3;++i)
	{
		cin>>x>>y;		
		x1=x1 ^ x;
		y1=y1 ^ y;
	}
	cout<<x1<<" "<<y1;
	return 0;	
}
