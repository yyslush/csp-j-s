#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int a[9],b[9],d,k,t,saa=0,sba=0,sa=0,sb=0;

int main()
{
	cin>>d;k=1;
	bool f=true;
	while(f&&k<=10)
	{
		++k;
		cin>>t;
		if(t>=0)
		{
			a[1]=t;
			for(int i=2;i<=8;++i) cin>>a[i];
			sort(a+1,a+9);
			for(int i=1;i<=8;++i) cin>>b[i];
			sort(b+1,b+9);
		}
		else
		{
			f=false;
			break;
		}					
		int i=1,j=1;
		if(a[1]<b[1])
			while(a[i]<b[j]&&a[i]<=d) ++i,++sa;
		else if(a[1]>b[1])
			while(b[j]<a[i]&&b[j]<=d) ++j,++sb;		
		cout<<sa<<":"<<sb<<endl;		
		saa+=sa;sba+=sb;
		sa=0;sb=0;
	}
	cout<<saa<<":"<<sba;
	return 0;	
}
