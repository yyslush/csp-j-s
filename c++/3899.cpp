#include<iostream>
#include<cstring>
using namespace std;

int a[1000005],b[1005,1000005];
queue <int> qu;

int mkp()
{
	bool c[1005];
	memset(c,true,sizeof(c));
	for(int i=2;i<=33;++i)
		if(c[i])
			for(int j=2;j<=1000/i;++j) c[i*j]=false;
	int j=1;		
	for(int i=2;i<=1000;++i)
	{
		if(c[i])
		b[0,j]=i;
		++j;
	}
	return j;					
}

int main()
{
	int l=mkp;
	int n;
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i]
		
	} 
	
	
}
