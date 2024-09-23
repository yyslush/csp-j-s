#include<iostream>
#include<cstring>
using namespace std;

int a[50],b[50],n,count=0;

int dfs(int p)
{
	cout<<p<<" ";
	for(int j=2;j<=n+1;++j) cout<<b[j];cout<<endl;
	if(p>n+1) return 0;	
	for(int i=1;i>=0;--i)
	{
		b[p]=i;		
		if((b[p-2]+b[p-1]+b[p]==a[p-1])||(p<=2)) dfs(p+1);
	}
}
int main()
{
	cin>>n;
	for(int i=2;i<=n+1;++i) cin>>a[i];
	memset(b,sizeof(b),0);
	dfs(2);
	for(int i=2;i<=n+1;++i) cout<<b[i];
	return 0;
}
