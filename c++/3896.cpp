#include<iostream>
using namespace std;

int n;
int gcd(long long  a,long long  b){
    return b==0 ? a:gcd(b,a%b);
}

void p(int i)
{
	long long b=1,c=1;
	for (int j=1;j<=i;++j)
	{
		c*=j;
		long long  g=gcd(b,c);
		b=b/g*(n-j+1);
		c/=g;	
	}
	b/=c;
	if (b!=1) cout<<b;
}

int main()
{
	cin>>n;
	cout<<"(a+b)^"<<n<<"=a";
	if (n!=1) cout<<"^"<<n;
	for(int i=1;i<=n-1;++i)
	{
		cout<<"+";
	    p(i);
		cout<<"a";
		if ((n-i)!=1) cout<<"^"<<n-i;
		cout<<"b";
		if (i!=1) cout<<"^"<<i;
	}
			
	cout<<"+b";
	if (n!=1) cout<<"^"<<n;
	return 0;
}
