#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	char ch='*';
	int j,n,s=0;
	cin>>n;
	for (int i=1;i<=n;i++)
	{	
	    for(j=1;j<=n-i;j++) cout<<" ";
	    for(j=i;j>=1;j--) cout<<ch;
		for(j=1;j<i;j++) cout<<ch;
		while(s<2)
		{
	        for(j=1;j<=2*(n-i);j++) cout<<" ";
		    for(j=i;j>=1;j--) cout<<ch;
		    for(j=1;j<i;j++) cout<<ch;
		     s++;
		}
		s=0;
		cout<<endl;
	}
	
	return 0;
}
