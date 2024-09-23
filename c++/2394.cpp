#include<iostream>
using namespace std;
int main()
{
	int n,m,a[8]={0},cont=0;
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
	  int p;
	  cin>>p;
	  if (a[p % 7]==0) cont++;
	  a[p%7]=1;	
	}
//	for (int i=1;i<=n;i++) cout<<a[i]<<" ";
//	cout<<endl;
	cout<<cont;
	return 0;
}
