#include<cstdio>
#include<iostream>
using namespace std;
int ans=0;
int a[100005],t[100005],k[100005],s[300005];
int main()
{
	int n,p,x,q=0;
	cin>>n;
	p=1;
	for (int i=1;i<=n;i++)
	{
		scanf("%d%d",&t[i],&x);
		k[i]=k[i-1]+x;
		for(int j=1;j<=x;j++)
		{
			q++;scanf("%d",&s[q]);
			if (a[s[q]]==0)  ans++;
			a[s[q]]++;
		}
		
		while (t[i]-t[p]>86400) 
		{
			for (int j=k[p-1]+1;j<=k[p];j++)
			{
				a[s[j]]--;
				if (a[s[j]]==0) ans--;
			}
			p++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
