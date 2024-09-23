#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,m=1;
    cin>>n;
    for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=n;j++) {printf("%3d",m);m+=1;
		}
		cout<<endl;
	}      
}
