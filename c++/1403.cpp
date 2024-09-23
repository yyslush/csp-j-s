#include<iostream>
#include<cstring>
using namespace std;
int a[10]={0},b[10000]={0},c[10]={0};


int main()
{
	for(int i=1;i<=4;++i)
	{
		int t;
		cin>>t;
		++a[t];
	}
	for (int i=1111;i<=9999;++i)
	{
		memcpy(c,a,sizeof(a));		
		int t=i;
		while(t>0)
		{
			c[t%10]--;t/=10;
		}		
		int p=0;
		for(int j=1;j<=9;++j) 
			if(c[j]>0) ++p;		
		if(p==0) cout<<i<<" ";	
	}
	return 0;
}

