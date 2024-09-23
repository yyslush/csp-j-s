#include<iostream>
using namespace std;

int main()
{
	int n,  mi=0, ma=0;
	double xi;
	cin>>n;
	for(int i=1;i<=n;i++) 
	{
		cin>>xi;	
		if(xi<0) mi+=1;
		if(xi>0) ma+=1; 
	}
	cout<<ma<<" "<<mi;
	return 0;
}
