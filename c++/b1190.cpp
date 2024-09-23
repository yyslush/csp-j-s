#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
double fa(double,int);

int main()
{
	//freopen("test/test1.in","r",stdin);
	//freopen("test/test.out","w",stdout);
	printf("%0.9lf %0.9lf",fa(4.2,10),fa(2.5,15));	
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}
double  fa(double x,int i)
{
	if (i=1) x=sqrt(1+x);else return sqrt(i+fa(x,i-1));	
	
}
