#include<iostream>
#include<iomanip>
using namespace std;

int map[205][205]={0},n,f[205]={0},a[205]={0},path[205]={0};

int main()
{
	cin>>n;
	for(int i=1;i<=n;++i) cin>>a[i];
	int x,y;
	while((cin>>x>>y)&&x&&y) map[x][y]=1;
	/*for(int i=1;i<=n;++i)
	{
		for(int j=1;j<=n;++j) cout<<setw(5)<<map[i][j];
		cout<<endl;
	}*/
	for(int i=1;i<=n;++i)
	{
		if(f[i]<a[i]) f[i]=a[i];
		for(int j=1;j<=n;++j)
			if(map[i][j])
				if(f[j]<f[i]+a[j])
				{
					f[j]=f[i]+a[j];
					path[j]=i;
				}
	}
	/*for(int j=1;j<=n;++j) cout<<setw(5)<<f[j]; cout<<endl;
	for(int j=1;j<=n;++j) cout<<setw(5)<<path[j];cout<<endl;*/
	int m=0;
	for(int i=1;i<=n;++i)
		if(f[i]>m) 
		{
			m=f[i];
			x=i;
		}
	y=0;
	//cout<<x<<endl;	
	while(path[x]!=0) a[++y]=x,x=path[x];
	a[++y]=x;
	for(int i=y;i>=2;--i) cout<<a[i]<<"-";cout<<a[1]<<endl;
	cout<<m;	
	return 0;		
}
