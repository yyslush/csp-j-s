#include<iostream>
using namespace std;
int a[105][105],b[105][105],maxn=0;

int main()
{
	char ch;
	int m,n;
	cin>>n>>m;
	for(int i=1;i<=n;++i)
		for(int j=1;j<=m;++j)
		{
			cin>>ch;
			a[i][j]=ch-64;
		}
	memset(b,1,sizeof(b));	
	
}
