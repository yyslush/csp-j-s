#include<iostream>
using namespace std;

int a[25][25],n;

int main()
{
	cin>>n;
	int t=1,i=1,j=1,k=n-1;
	do
	{
		for(int l=1;l<=k;++l)
		{
			a[i][j]=t;++t;++j;
		}
		for(int l=1;l<=k;++l)
		{
			a[i][j]=t;++t;++i;
		}
		for(int l=1;l<=k;++l)
		{
			a[i][j]=t;++t;--j;
		}
		for(int l=1;l<=k;++l)
		{
			a[i][j]=t;++t;--i;
		}
		++i;++j;k-=2;
	
	}while(t<n*n);
	if (n%2==1) a[i][j]=t;
	/*for(int p=1;p<=n;++p)
		{
			for(int q=1;q<=n;++q) cout<<a[p][q]<<" ";
			cout<<endl;
		}*/		
	int ls=0,rs=0;
	for(i=1;i<=n;++i)
		for(j=1;j<=n;++j)
		{
			if(i==j) ls+=a[i][j];
			if(i+j==n+1) rs+=a[i][j];
		}
	cout<<ls*rs;
	return 0;	
}
