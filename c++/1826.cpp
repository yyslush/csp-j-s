#include<iostream>
#include<algorithm>
using namespace std;
int a[100005],n,k,m;

int find(int l,int r,int k)
{	
	int mid=(l+r)/2;////cout<<mid<<"  ";
	if(a[mid]==k) return mid;
	if(a[mid]>k) 
		find(l,mid-1,k);
	else
		find(mid+1,r,k);
}


int main()
{
	cin>>n;
	for(int i=1;i<=n;++i) cin>>a[i];
	sort(a+1,a+n+1);	
	cin>>m;
	for(int i=1;i<=m;++i)
	{
		cin>>k;
		cout<<find(1,n,k)<<endl;
	}
	return 0;
}
