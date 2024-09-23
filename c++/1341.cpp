#include<iostream>
using namespace std;
int main()
{
	int n,s,maxs=0,ma;
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		int a,b,c,m;
		cin>>m>>a>>b>>c;
		s=a*3+b-c;
		if(s>maxs) 
		{
			maxs=s;
			ma=m;
		}
	}
	cout<<ma;
	return 0;
}
