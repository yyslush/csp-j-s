#include<iostream>
using namespace std;
int m,n;
int main()
{
	int c;
	cin>>c;
	for(int i=1;i<=c;++i)
	{
		cin>>m>>n;
		if(n>m) swap(n,m);
		bool f=true;
		while(m%n!=0&&m/n==1)
		{
			int t=m%n;
			m=n;
			n=t;
			f=not(f);
		}
		if(f) 
			cout<<"Tongtong wins"<<endl; 
		else
			cout<<"Jiji wins"<<endl;
	}
	return 0;
}
