#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	long long s=0;
	for(int i=0;i<n;i++)
	{
		int d,l;
	    scanf("%d%d",&d,&l);
	    s=s+d*l;
	}
	cout<<s<<endl;
}
