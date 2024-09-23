#include<iostream>
using  namespace std;
int m[4][105],n;

int main()
{
	int p1=0,p2=0,p3=0;
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		int t;
		cin>>t;
		if(t/10000000==8) m[1][++p1]=t;
		if(t/10000000==5) m[2][++p2]=t;
		if(t/10000000==2) m[3][++p3]=t;
	}
	cout<<"A:";
	for(int i=1;i<=p1;++i) cout<<m[1][i]<<" ";cout<<endl;
	cout<<"B:";
	for(int i=1;i<=p2;++i) cout<<m[2][i]<<" ";cout<<endl;
	cout<<"C:";
	for(int i=1;i<=p3;++i) cout<<m[3][i]<<" ";cout<<endl;
	return 0;
}
