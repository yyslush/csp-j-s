#include<iostream>
#include<string>
#include<sstream>
using namespace std;

string a[25];
int n;
stringstream stream;

int main()
{
	cin>>n;
	for(int i=1;i<=n;++i) 
	{
		int t;
		cin>>t;	
		stream<<t;
		stream>>a[i];
		stream.clear();	
	}
	for(int i=1;i<=n-1;++i)
		for(int j=1;j<=n-i;++j)
			if(a[j]+a[j+1]<a[j+1]+a[j])
			{
				a[0]=a[j];
				a[j]=a[j+1];
				a[j+1]=a[0];				
			}
	for(int i=1;i<=n;++i) cout<<a[i];
	return 0;	
}
