#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int h[1005],maxh=-1;

int main()
{
	int n,x,t=0;
	double ave=0;
	memset(h,0,sizeof(h));	
	//freopen("test/test1.in","r",stdin);
	//freopen("test/test.out","w",stdout);	
	cin>>n;
	for(int i=1;i<=n;++i)
		for (int j=1;j<=n;++j) 
		{
			cin>>x;
			if(j==1||j==n||i==j||i+j==n+1)	++h[x];
				
		}	
	for(int i=1;i<=1000;++i)
		if(h[i]!=0)
		{
			if (maxh<h[i]) maxh=h[i];
			ave=ave+i*h[i];	
		}
	if (n%2==0) ave=ave*1.0/(4*(n-1));else ave=ave*1.0/(4*(n-1)-1);	
	printf("%0.1lf\n",ave);
	cout<<maxh;
	//fclose(stdin);
	//fclose(stdout);
	return 0;		
}
