#include<bits/stdc++.h>
using namespace std;
int a[20][20],n,maxll=0;
bool b[20]={false};
void dfs(int p,int s)
{
	if(p>n)
	{
		if(s>maxll) maxll=s;
		exit;
	}
	for(int i=1;i<=n;++i)
		if(b[i]==false)
		{
			b[i]=true;
			//cout<<p<<" "<<i<<" "<<s+a[p][i]<<endl;                    
			dfs(p+1,s+a[p][i]);
			b[i]=false;
		}
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;++i)
		for(int j=1;j<=n;++j) cin>>a[i][j];
	dfs(1,0);
	cout<<maxll;
	return 0;	
}
