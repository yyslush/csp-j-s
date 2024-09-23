#include<iostream>
using namespace std;
int main()
{
	int n,t=0;
	cin>>n;
	for (int i=1;i<=n;++i)
	{
		int s=i,a=0,l=0;
		while(s>0)
		{		
			++l;
			if(s&1) ++a;
			s=s>>1;			
		}		
		if (l-a<a ) ++t;
	}
	cout<<t<<" "<<n-t;
	return 0;
}
