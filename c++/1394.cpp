#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	double s=0;
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		int t;
		cin>>t;
		if (t%70==0) t/=70;else t=t/70+1;
		s=s+t*0.1;		
	}
	printf("%.1lf",s);
	return 0;
}
