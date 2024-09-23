#include<iostream>
using namespace std;
const long long maxll=6000000000000;
long long a[505][505];
int n;

int main()
{
	//freopen("test/train10.in","r",stdin);
	//freopen("test/train10.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;++i)
		for(int j=1;j<=n;++j)
		{
			int t;
			scanf("%ld",&t);
			if(i!=j&&t==0) a[i][j]=maxll;else a[i][j]=t;
		}
		 	
	for(int k=1;k<=n;++k)
		for(int i=1;i<=n;++i)
			for(int j=1;j<=n;++j)
				if(a[i][j]>a[i][k]+a[k][j]) a[i][j]=a[i][k]+a[k][j]	;
	for(int i=1;i<=n;++i)
	{
		for(int j=1;j<=n;++j)
			if(a[i][j]==maxll) cout<<0<<" ";else cout<<a[i][j]<<" ";
		cout<<endl;	
	}
	//fclose(stdin);
	//fclose(stdout);	
	return 0;				
}
