#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

char  s1[10005],s2[10005],s[10005];
int n,m,l,r,c,ans=0;

int main()
{
	cin>>n;	
	cin>>s1;
	cin>>s2;
	
	cin>>m;
	for(int i=1;i<=m;++i)
	{
		strcpy(s,s1);
		cin>>l>>r>>c;
		--l;--r;
		c=c % (r-l+1);
		for(int j=l;j<=r;++j)
			s1[(j-l+c) % (r-l+1)+l]=s[j];
		
	}
	for (int i=0;i<n;++i)
		if(s1[i]==s2[i]) ++ans;
	cout<<ans;
	return 0;	
}
