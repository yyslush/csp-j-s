#include<iostream>
using namespace std;

int n,l=0;
long long d,jc=1,cc=0,temp;

bool check(long long temp,int i)
{
	int t=0;
	while(temp>0)
	{
		t+=temp%10;
		temp/=10;
		++l;
	}
	if(t==i) return true;else return false;
}
int main()
{
	scanf("%d\n",&n);
	scanf("%lld",&d);
	for(int i=1;i<=n;++i)
	{
		jc*=i;
		cc=cc*10+1;
	}
	jc/=n;
	for(int i=0;i<=9*n;++i)
	{
		temp=i*jc*cc-d;
		if(temp>0&&check(temp,i)) break;
	}
	if(l<n)
		for(int i=1;i<=n-l;++i) cout<<0;
	cout<<temp;
	return 0;
}
