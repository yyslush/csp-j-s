#include <iostream>
using namespace std;
int main()
{
	int a=0,x;
	cin>>x;
	for(int i=1 ;i<=4;i++)
      {
			  a=a*10+ x%10;
			  x/=10;
      }
	cout<<a;
	return 0;	
}
