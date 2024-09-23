#include<iostream>
using namespace std;
int a[105],b[25],n,m,c=0;

int main()
{
	//freopen("test/test8.in","r",stdin);
	cin>>n>>m;
	for(int i=1;i<=n;++i) cin>>a[i];
	for(int i=1;i<=m;++i) cin>>b[i];
	for(int i=1;i<n;++i)
		for(int j=n;j>i;--j)
		if(a[j]<a[j-1]) swap(a[j],a[j-1]);
	for(int i=1;i<m;++i)
		for(int j=m;j>i;--j)
		if(b[j]<b[j-1]) swap(b[j],b[j-1]);	
	//for(int i=1;i<=n;++i) cout<<a[i]<<" ";cout<<endl;
	//for(int i=1;i<=m;++i) cout<<b[i]<<" ";cout<<endl;
	int p=n,q=m,f=0;;
	while((p>=1)&&(q>=1))
	{
		while(b[q]<a[p]) --p;		
		if((f<2)&&(p>=1))
		{
			++c;
			++f;			
			//if (f==1) cout<<b[q]<<" "<<a[p]<<" ";else cout<<a[p]<<endl;
			--p;
		}
		else if(f==2)
		{
			--q;
			f=0;
		}
	}
	cout<<c;
	//fclose(stdin);
	return 0;	
}
