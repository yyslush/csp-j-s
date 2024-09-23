#include<iostream>
using namespace std;
int maxl=0,p,q;

int main()
{
	cin>>p>>q;
	for(int i=p;i<=q;++i)
	{
		int t=i,count=0;
		while(t!=1)
		{
			if(t%2==0)	t/=2;	else t=t*3+1;
			++count;			
		}
		if(maxl<count+1) maxl=count+1;	
	}
	cout<<maxl;
	return 0;
}
