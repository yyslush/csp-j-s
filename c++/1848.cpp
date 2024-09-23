#include<bits/stdc++.h>
using namespace std;
string s;
int ma=1,a[4005],dp[4005]={0},n=0;

int main()
{
	int t;
	getline(cin,s);
    s+=" ";
    while(s.length()>0)
        {
            int p=-1;
            int t=0;
            while(s[++p]!=' ') t=t*10+s[p]-48;               
            a[++n]=t;
            s.erase(0,p+1);         
        }       
	//for(int i=1;i<=n;++i) cout<<a[i]<<" ";cout<<endl;
	dp[1]=1;
	for(int i=2;i<=n;++i)
	{
		dp[i]=1;
		for(int j=i-1;j>=1;--j)
			if(a[i]<=a[j]&&dp[i]<dp[j]+1) dp[i]=dp[j]+1;
		if(ma<dp[i]) ma=dp[i];
	}
	cout<<ma;
	return 0;
}
