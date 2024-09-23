#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
double f[25][105],a[25][105],w[25],c[25];
int b[25][105],d[25],x,n;

int main()
{
	cin>>x>>n;
	for(int i=1;i<=n;++i) cin>>w[i]>>c[i];
	for(int i=1;i<=n;++i)
	{
		for(int v=x;v>0;--v)
			if(w[i]<=v)
				if(f[i-1][v]<f[i-1][v-w[i]]+c[i])
				{
					a[i][v]=v-w[i];					
					b[i][v]=i;
					f[i][v]=f[i-1][v-w[i]]+c[i];
				}
				else
				{
					a[i][v]=a[i-1][v];
					b[i][v]=b[i-1][v];
					f[i][v]=f[i-1][v];
				}		
			else
			{
				a[i][v]=a[i-1][v];
				b[i][v]=b[i-1][v];
				f[i][v]=f[i-1][v];	
			}
	//for(int j=1;j<=x;++j)cout<<f[i][j]<<setw(4);	cout<<endl;
	//for(int j=1;j<=x;++j)cout<<a[i][j]<<setw(4);	cout<<endl;	
	//for(int j=1;j<=x;++j)cout<<b[i][j]<<setw(4);	cout<<endl;	
	}
			
	cout<<f[n][x]<<endl;
	int p=0;
	while(a[n][x]>0)
	{
		while(a[n-1][x]==a[n][x]) --n;
		d[++p]=b[n][x];		
		x=a[n][x];
		//cout<<x<<endl;
		--n;
	} 
	for(int i=p;i>=1;--i)cout<<d[i]<<" ";
	return 0;
	
			
}
