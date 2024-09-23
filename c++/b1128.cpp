#include<iostream>
#include<cstring>
using namespace std;
int main ()
{
	//freopen("test/test1.in","r",stdin);
    //freopen("test/test1.out","w",stdout);
    int n,m,k,a[101][101],b[101][101],t=0; 
    cin>>n>>m;
    for(int i=1;i<=n;++i)   
		for(int j=1;j<=m;++j) cin>>a[i][j];
	for(int i=1;i<=n;++i)
   		for(int j=1;j<=m;++j) 
   	   		if (i!=1&&i!=n&&j!=1&&j!=m) b[i][j]=int((a[i-1][j]+a[i][j-1]+a[i+1][j]+a[i][j+1]+a[i][j])*1.0/5+0.5);
   	   		else b[i][j]=a[i][j];
	for(int i=1;i<=n;++i)
	{
		for(int j=1;j<m;++j) cout<<b[i][j]<<" ";
		cout<<b[i][m]<<endl;
	}
   		
	//fclose(stdin);   
   	//fclose(stdout);	
	return 0;
}

