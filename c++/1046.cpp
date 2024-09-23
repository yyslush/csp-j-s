#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    cin>>n;
   for (int i=1;i<=n;i++)
	{ 
	   	for (int j=1;j<=n;j++) 
		   if (i+j>n+1) printf("%3d",j);
		   else printf("%3d",n-i+1);
		cout<<endl;
	}      
}
