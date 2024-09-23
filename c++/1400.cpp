#include<iostream>
using namespace std;
int n;
bool a[105]={0};
int main()
{
	cin>>n;
	int i=0,p=n,t=0;
	while(p>1)
	{
		if(i==n) i=1;else ++i;
		if(++t%3==0) t=0,a[i]=1,--p;
	}
	i=1;
	while(a[i]==0)++i;
	cout<<i;
	return 0;
}
