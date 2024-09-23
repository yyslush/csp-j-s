#include<iostream>
#include<cstring>
using namespace std;
long long c[101][101];
int main ()
{
	freopen("test/test5.in","r",stdin);
    freopen("test/test5.out","w",stdout);
    int n,m,k,a[101][101],b[101][101],t=0; 
    cin>>n>>m>>k;
    for(int i=1;i<=n;++i)   
		for(int j=1;j<=m;++j) cin>>a[i][j];
	for(int i=1;i<=m;++i)
   		for(int j=1;j<=k;++j) cin>>b[i][j];
	for(int i=1;i<=n;++i)
		for (int j=1;j<=k;++j)
			for (int l=1;l<=m;++l)
				c[i][j]+=a[i][l]*b[l][j];
	for (int i=1;i<=n;++i)
	{
		for (int j=1;j<k;++j) cout<<c[i][j]<<" ";
		cout<<c[i][k]<<endl;
	}	
	fclose(stdin);   
   	fclose(stdout);	
	return 0;
}

