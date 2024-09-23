#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,a,b,l=0,max=0;
	scanf("%d%d%d",&n,&a,&b);
	for(int i=0;i<=n;i++)
	  if (a*i<=b*(n-i))
	    if (max<a*i) {
	    	max=a*i;
	    	l=i;
		}
	if  (((l+1)*a>(n-l-1)*b)&&(l*a<(n-l-1)*b)) max=(n-l-1)*b;
	cout<<max;
	return 0;
}
