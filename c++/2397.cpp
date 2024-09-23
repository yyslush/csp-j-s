#include<iostream>
#include<algorithm>
using namespace std;
long long gx[105],gy[105];
int gcd(long pa,long pb)
{
	if (pa%pb==0) 	return pb;
	else  return gcd(pb,pa%pb);
}
int congraph(long n,long k,int x,int y)
{
	int px=0,py=0;
	for (int i=1;i*i<=x;i++)	
		if (x%i==0)
		{
			if(i>k) gx[px++]=i;//cout<<px<<endl;
			if (x/i>k) gx[px++]=x/i;
			//cout<<gx[px]<<endl;
		} 
	for (int i=1;i*i<=y;i++)
		if (y%i==0)
		{
			if(i>k) gy[py++]=i;
			if (y/i>k) gy[py++]=y/i;
		} 
	for(int i=0;i<px;i++) 
	  for(int j=0;j<py;j++) 
	     if (gx[i]/gcd(gx[i],gy[j])*gy[j]<=n) return 1;
  	return 0;
}

int main()
{
	int t,x,y;
	long long n,k;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		cin>>n>>k>>x>>y;
		if (congraph(n,k,x,y)) cout<<"Possible"<<endl;
		else cout<<"Impossible"<<endl;	
	}
	return 0;
}
