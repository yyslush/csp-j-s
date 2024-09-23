#include<iostream>
using namespace std;
int a[10],n,k,ans=0;

void  dfs(int st)
{
	if(n==0) return;
	if(st==k) 
	{
		if(n>=a[st-1]) ++ans;
		return ;
	}
	for(int i=a[st-1];i<=n/(k-st+1);++i)
	{
		a[st]=i;
		n-=i;
		dfs(st+1);
		n+=i;
	}
}

int main()
{
	cin>>n>>k;
	a[0]=1;
	dfs(1);
	cout<<ans;
	return 0;
}
