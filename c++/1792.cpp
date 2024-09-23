#include<iostream>
using namespace std;

int a[35],n;

void search(int k)
{
	for(int i=1;i<=k-1;++i) cout<<a[i]<<"+";cout<<a[k]<<endl;
	int p=k,l=a[p];
	for(int i=a[p-1];i<=l/2;++i)
	{
		a[p]=i;
		a[p+1]=l-i;
		search(p+1);
	}
}

int main()
{
	cin>>n;
	for(int i=1;i<=n/2;++i)
	{
		a[1]=i;		
		a[2]=n-i;
		//cout<<a[1]<<" "<<a[2]<<endl;
		search(2);
	}
	
	return 0;
}
