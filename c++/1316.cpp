#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n,t=0;
	string m,x;
	cin>>n;
	cin>>m;
	for(int i=1;i<=n;++i)
	{
		cin>>x;
		if(x.length()>m.length())++t;
		else if (x.length()==m.length()) 
			 if (x>=m) ++t; 
	}
	cout<<t;
	return 0;
}
