#include<iostream>
using namespace std;
int n;
float s;
int main()
{
	s=1.5;
	for (n=50; n>=3; n--)
	  s=s+1.0/n;
	printf("%6.4f",s);
	return 0;
}
