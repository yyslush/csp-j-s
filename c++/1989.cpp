#include<iostream>
using namespace std;

int a[105];

int main()
{
	int x=0,p=1;
	a[p]=7;
	while(1)
	{
		++p;		
		a[p]=(a[p-1]*7+x) %10;
		x=(a[p-1]*7+x)/10;
		//cout<<p<<" "<<a[p]<<" "<<x<<endl;
		if ((x==1)&&(a[p]==0)) break;
	}
	a[++p]=1;
	for(int i=p;i>=1;--i) cout<<a[i];
	return 0;
}
