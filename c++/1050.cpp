#include <iostream>
#include <cstring>
#include <iomanip>
#include <cstdio>
using namespace std;
int n,a[13][13];
int main()
{
	int i,j;
	cin>>n;
	memset(a,0,sizeof(a));
	for (i=0;i<n;i++) a[i][i]=i+1;
	for (i=n-2;i>=0;i--)
	  for (j=i+1;j<n;j++) a[i][j]=a[i][j-1]+a[i+1][j];
	for (i=0;i<n;i++)
	  {
	  	for(j=0;j<n;j++) if (a[i][j]!=0) printf("%5d",a[i][j]); else printf("%5c",32);
	  	printf("\n");
		}    
}
