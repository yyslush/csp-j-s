#include<iostream>
#include<cstring>
using namespace std;
int main ()
{
	//freopen("test/test5.in","r",stdin);
    //freopen("test/test5.out","w",stdout);
    int n,m,x,y,a[101][101],t=0; 
    cin>>m>>n;
    for(int i=1;i<=m;++i)   
		for(int j=1;j<=n;++j) cin>>a[i][j];
	for(int i=1;i<=m;++i)
   		for(int j=1;j<=n;++j)
		{
			cin>>x;
			if (a[i][j]==x) ++t;
		}
	printf("%0.2f",t*1.0/(m*n)*100);   
	//fclose(stdin);   
   	//fclose(stdout);	
	return 0;
}

