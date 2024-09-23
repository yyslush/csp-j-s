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
		   if (i==j) printf("%3d",1);
		   else printf("%3d",0);
		cout<<endl;
	}      
}
