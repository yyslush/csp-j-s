#include<iostream>
using namespace std;
int f[100005],n,m,sum=0;

int getf(int t)
{
	if(f[t]==t)
		return t;
	else
	{
		f[t]=getf(f[t]);
		return f[t];
	}
}

void merge(int x,int y)
{
	int t1=getf(x),t2=getf(y);
	if(t1!=t2) f[t2]=t1;
	return ;
}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=m;++i) f[i]=i;
	for(int i=1;i<=m;++i)
	{
		int x,y;
		cin>>x>>y;
		merge(x,y);
	}
	for(int i=1;i<=n;++i)
		if (f[i]==i) ++sum;
	cout<<sum;
	return 0;	
}
