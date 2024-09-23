#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	char ch='@';
	int j,n;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++) cout<<" ";
		for(j=i;j>=1;j--) {
			ch+=j; cout<<ch;ch='@';
		}
		
		for (j=2;j<=i;j++){	ch+=j; cout<<ch;ch='@';
		}
		cout<<endl;
		
	}
	return 0;
}
