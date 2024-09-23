#include<iostream>
using namespace std;
int a[10],n,m,t=0;
bool b[10];
void dfs(int k)
{
	if(k>n)
	{
		++t;
		if (t==m) 
			for(int i=1;i<=n;++i)cout<<a[i];
		return;		
	}
	for (int i=1;i<=n;++i)
		if(b[i]==false)
		{
			b[i]=true;
			a[k]=i;
			dfs(k+1);
			b[i]=false;
		}
}
int main()
{
	cin>>n>>m;
	dfs(1);
}

