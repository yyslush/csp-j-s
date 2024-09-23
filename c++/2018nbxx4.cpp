#include<iostream>
using namespace std;

int m[405]={0},oil[405]={0},w[405]={0},c[405],n,l;

void doit()
{
	for(int i=0;i<=n;++i) cout<<m[i]<<" ";cout<<endl;
	for(int i=0;i<=n;++i) cout<<oil[i]<<" ";cout<<endl;
	for(int i=0;i<=n;++i) cout<<c[i]<<" ";cout<<endl;
	for(int i=0;i<=n;++i) cout<<w[i]<<" ";cout<<endl;
	cout<<endl;
}

int main()
{
	cin>>n>>m[0]>>l;
	doit();
	for(int i=2;i<=n;++i) cin>>w[i];
	for(int i=1;i<=n;++i) cin>>c[i];
	for(int i=2;i<=n;++i)
	{
		if(c[i]<=c[i-1])
		{
			oil[i-1]=w[i];
			m[i-1]=m[i-2]-w[i]*c[i-1];
			doit();
		}
		else
		{
			if(m[i-2]/c[i-1]>l) 
			{
				oil[i-1]=l;
				m[i-1]=m[i-2]-l*c[i-1];
			}
			else
			{
				oil[i-1]=m[i-2]/c[i-1];
				m[i-1]=m[i-2]%c[i-1];
			}			
			doit();
		}
	}
	oil[n]=oil[n-1]-w[n];
	m[n]=oil[n]*c[n];	
	cout<<m[n];
	return 0;
}
