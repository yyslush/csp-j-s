#include<iostream>
using namespace std;
int a[10005][3005],n;
int main()
{
	int x=0;
	cin>>n;
	a[1][0]=1;a[1][1]=1;
	a[2][0]=1;a[2][1]=2;
	for (int i=3;i<=n;++i)
	{
		a[i][0]=a[i-1][0];
		x=0;
		for (int j=1;j<=a[i][0];++j)
		{
			a[i][j]=a[i-1][j]+a[i-2][j]+x;
			x=a[i][j] / 10;
			a[i][j]=a[i][j] % 10;
		}
		if (x>0) 
		{
			a[i][0]++;
			a[i][a[i][0]]=x;
		}
	}
	for (int i=a[n][0];i>=1;--i) cout<<a[n][i];
	return 0;
}
