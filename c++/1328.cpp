#include<iostream>
using namespace std;
int a[205],n,t=0;

int main()
{
	cin>>n;
	int sum=0;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i];
		sum+=a[i];
	}
	int ave=sum /n;	
	for(int i=1;i<=n;++i)
	{
		a[i]-=ave;
		if(a[i]!=0)
		{
			//cout<<i<<endl;
			++t;
			a[i+1]+=a[i];
		}
	}
	cout<<t;
	return 0;	
 } 
