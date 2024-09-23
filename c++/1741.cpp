#include<iostream>
#include<cstring>
using namespace std;
int c[1005]={0},b[1005]={0},a[1005]={0},m,n;

int main()
{
	cin>>m>>n;
	b[1]=1;
	int l=1;
	for(int i=m+1;i<=n;++i)
	{
		int x=0;		
		for(int j=1;j<=l;++j)
		{
			a[j]=c[j]+b[j]+x;
			x=a[j]/10;
			a[j]%=10;
		}
		if(x>0) a[++l]=x;		
		for(int j=l;j>=1;--j) c[j]=b[j];
		for(int j=l;j>=1;--j) b[j]=a[j];	
	}
	for(int i=l;i>=1;--i)cout<<a[i];	
	return 0;
}
