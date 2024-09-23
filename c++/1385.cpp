#include<iostream>
#include<cstdio>
using namespace std;
double n;

int main()
{
	cin>>n;
	if (n<=50) printf("%0.2lf",n*0.538);
	else if ((n>50)&&(n<=200)) printf("%0.2lf",50*0.538+(n-50)*0.568);
	else  if (n>200) printf("%0.2lf",50*0.538+150*0.568+(n-200)*0.638);
	return 0;
}
