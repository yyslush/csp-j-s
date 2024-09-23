#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    n+=1;
   for (int i=0;i<n-1;i++)
	{
		for(int k=1;k<n-i;k++) cout<<' ';
		for (int j=1;j<=2*i+1;j++) cout<<'*';
		cout<<endl;
	}      
    for (int i=1;i<=n;i++)
	{
		for(int k=1;k<i;k++) cout<<' ';
		for (int j=1;j<=2*(n-i)+1;j++) cout<<'*';
		cout<<endl;
	}  
   return 0;	    
}
