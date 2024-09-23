#include<iostream>
#include<cmath>
using namespace std;
int a,b,e,d,nu,de,zn;
char c;
bool f=false;

int gcd(int m,int n)
{
	if (m%n==0) return n;else gcd(n,m%n);
}

int main()
{
	cin>>a>>b>>c>>d>>e;
	switch(c)
	{
		case '+':nu=a*e+d*b;de=b*e;break;
		case '-':nu=a*e-d*b;de=b*e;break;
		case '*':nu=a*d;de=b*e;break;
		case '/':nu=a*e;de=b*d;break;
	}
	//cout<<nu<<" "<<de<<endl; 
	if ((nu<0)&&(de>0)||(nu>0)&&(de<0)) f=true;
	int temp=gcd(nu,de);
	nu=abs(nu/temp);
	de=abs(de/temp);
	//cout<<nu<<" "<<de<<endl;
	if (f) cout<<"-";
	if (nu==0) cout<<0;
	else if (nu>=de)
	{
		cout<<nu/de<<" ";
		cout<<nu-nu/de*de<<"/"<<de;
	}
	else  cout<<nu<<"/"<<de; 
	
	return 0;
}
