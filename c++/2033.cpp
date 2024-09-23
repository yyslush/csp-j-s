#include<iostream>
using namespace std;
int a[200005],n;

int main()
{
	cin>>n;
	for(int i=1;i<=n;++i) cin>>a[i];
	int t1=0,t2=0;
	for(int i=n;i>=1;--i)
	{
		if(a[i]==2) 
		{
			++t2;a[i]=t1;
		}
		else if(a[i]==1) 
		{
			++t1;a[i]=0;
		}
		else if(a[i]==3) a[i]=t1+t2;
		f//or(int i=1;i<=n;++i) cout<<a[i]<<" ";cout<<t1<<" "<<t2<<endl;
	}
	for(int i=1;i<=n;++i) cout<<a[i]<<" ";
	return 0;
	
}
