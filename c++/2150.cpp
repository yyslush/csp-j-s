#include<iostream>
using namespace std;
int a,b,c;
int main()
{
	cin>>a>>b;
	c=a/b;
	int yu=a%b;
	if (yu>=10)
		if((yu/c>3)||((yu/c==3)&&(yu%c>0))) ++c;
	cout<<c;
	return 0;	
}
