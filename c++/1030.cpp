#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,m,l;
    cin>>n;
   
    for (int i=1;i<=n;i++)
	{ 
	    m=n*(n-i);
	    l=m+1;
		for (int j=1;j<=n;j++) printf("%3d",l++);
		cout<<endl;
	}      
}
