#include<iostream>
using namespace std;
int f[40010],n,m,n1,n2;
char ch;

int find(int x)
{
	if (f[x]==x) 	return f[x];
	else f[x]=find(f[x]);
}

int main()
{
	cin>>n>>m;
	for(int i=1;i<=n*n;++i) f[i]=i;
	for(int i=1;i<=m;++i)
	{
		int a,b;
		cin>>a>>b;
		a=n*(a-1)+b;
		cin>>ch;		
		if (ch=='R') b=a+1;else b=a+n;
		n1=find(a);n2=find(b);
		if (n1!=n2) f[n2]=n1; 
		else
		{
			cout<<i;
			return 0;
		 } 
	}
	cout<<"draw";
	return 0;	
}
