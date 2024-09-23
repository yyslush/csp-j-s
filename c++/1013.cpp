 #include<cmath>
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	float s;
	for(int i=1;i<=n;i++)
	  s=s+1.0/i;
	printf("%0.3f",s);
	return 0; 		
}
