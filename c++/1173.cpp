#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int a[25],b[25],n,k,ans=0;
int judge(int m)
{
	int s=0,t=m,c=0;
	int sl[10];	
	while(m>0)
	{
		++c;
		sl[c]=m%10;
		m/=10;
	}
	for (int i=1;i<=c;++i) s+=pow(sl[i],c);
	cout<<s<<" "<<t<<" "<<endl;
	if (s==t) ++ans;
}
int dfs(int m,int sum)
{
	if(m>k) { judge(sum);return 0;}
	for (int i=b[m-1]+1;i<=n;++i)
	{
		b[i]=i;		
		sum+=a[i];		
		dfs(m+1,sum);			
	}	
}
int main()
{
	cin>>n>>k;
	for (int i=1;i<=n;++i) cin>>a[i];
	b[0]=0;
	dfs(1,0);	
	cout<<ans;
	return 0;
}

