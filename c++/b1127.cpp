#include<iostream>
#include<cstring>
using namespace std;
int main ()
{
	//freopen("test/test5.in","r",stdin);
    //freopen("test/test5.out","w",stdout);
    int n,m,k,a[101][101],b[101][101],c[101][101],t=0; 
    cin>>n>>m>>k;
    for(int i=1;i<=m;++i)   
		for(int j=1;j<=n;++j) cin>>a[j][m-i+1];
	for(int i=1;i<=n;++i)
   		{
			for(int j=1;j<=m-1;++j) cout<<a[i][j]<<" ";
			cout<<a[i][m]<<endl;
		}
	//fclose(stdin);   
   	//fclose(stdout);	
	return 0;
}

