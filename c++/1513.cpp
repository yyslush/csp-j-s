#include<iostream>
using namespace std;
int main()
{
	int n,m,i,j,s1=0,s2=0;
	cin>>n>>m;
	for(i=1;i<=min(n,m);i++)
		s1+=(m-i+1)*(n-i+1);
	s2=(n+1)*(m+1)*n*m/4;
	cout<<s1<<','<<s2-s1;
	return 0;
}
