#include<iostream>
using namespace std;
int a[205][1000],n,p=1;

void add(int l)
{
	int x=0;
	for(int i=3;i<=l;++i)
	{
		for(int j=1;j<=p;++j)
		{
			a[i][j]=a[i-1][j]+a[i-2][j]+x;			
			x=a[i][j]/10;
			a[i][j]=a[i][j]%10;
			//cout<<i<<" "<<j<<" "<<a[i][j]<<" "<<x<<endl;
		} 	
		if (x>0) a[i][++p]=x;
		x=0;
		//cout<<p<<endl;
		//for(int j=p;j>=1;--j) cout<<a[i][j];cout<<endl;
	}					
}

int main()
{
	cin>>n;
	a[1][1]=1;
	a[2][1]=2;
	add(n);
	for(int i=p;i>=1;--i) cout<<a[n][i];
	return 0;	
}
