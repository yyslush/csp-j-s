#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int f[25]={0},n,ma=0;
string s;

void dfs(int temp,int step,int su)
{
	if(step==n+1) return;
	if(temp==0) ma=max(su,ma);
	dfs(temp^f[step+1],step+1,su+1);
	dfs(temp,step+1,su);
}

int main()
{
	cin>>n;
	//freopen("1352/1352.out","w",stdout);
	for(int i=1;i<=n;++i)
	{
		cin>>s;
		for(int j=0;j<s.length();++j)
			f[i]^=(1<<(s[j]-48));
		if(f[i]==0) ma=1;
	}
	dfs(0,0,0);
	cout<<ma;
	//fclose(stdout);
	return 0;
}
