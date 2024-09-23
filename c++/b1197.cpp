#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int a=0,b=0,c=0,d=0,n,t;
	cin>>n;
	for (int i=1;i<=n;++i)
	{
		cin>>t;
		if (t>=0&&t<=18) ++a;
		if (t>=19&&t<=35) ++b;
		if (t>=36&&t<=60) ++c;
		if (t>=61) ++d;
	}
	printf("%0.2lf%\n%0.2lf%\n%0.2lf%\n%0.2lf%\n",a*1.0/n*100,b*1.0/n*100,c*1.0/n*100,d*1.0/n*100);	
	
	
}
