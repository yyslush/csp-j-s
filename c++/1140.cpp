#include<iostream>
#include<cstdio>
using namespace std;
int a[100005], b[100005],c[100005],p[200005],n;

void siftdown(int i)
{
	int t,f=0;
	
	while(i*2<=n && f==0)
	{
		if (p[i]>p[i*2]) t=i*2;else t=i;
		if (i*2+1<=n && p[t]>p[i*2+1]) t=i*2+1;
		if(t!=i) 
		{
			c[0]=c[t];
			c[t]=c[i];
			c[i]=c[0];
			p[0]=p[t];
			p[t]=p[i];
			p[i]=p[0];
			i=t;
		}
		else f=1;
	}
	//for(int i=1;i<=n;++i) cout<<p[i]<<" ";cout<<endl;
	return;
}

int main()
{
	cin>>n;
	for(int i=1;i<=n;++i) scanf("%ld",&a[i]);
	for(int i=1;i<=n;++i) 
	{
		scanf("%ld",&b[i]);
		p[i]=a[i]+b[1];
		c[i]=1;
	}
	for(int i=1;i<=n;++i)
	{
		cout<<p[1]<<" ";
		p[1]=p[1]-b[c[1]]+b[c[1]+1];
		++c[1];
		siftdown(1);		
	}	
	return 0;
}
