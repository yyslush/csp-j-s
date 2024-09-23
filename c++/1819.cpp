#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int a[105][105],n,k;

int main()
{
	cin>>n;
	k=int(log(n)/log(2));
	int m=1,half=1;
	a[1][1]=1;
	while(m<=k+1)
	{
		for(int i=1;i<=half;++i)
			for(int j=1;j<=half;++j) a[i][j+half]=a[i][j]+half;
		for(int i=1;i<=half;++i)
			for(int j=1;j<=half;++j) 
			{
				a[i+half][j]=a[i][j+half];
				a[i+half][j+half]=a[i][j];	
			}	
		half*=2;m+=1;	
	}
	for (int i=1;i<=n;++i)
	{
		for(int j=1;j<=n;++j) printf("%5ld",a[i][j]);
		cout<<endl;
	}
	return 0;
 } 
