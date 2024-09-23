#include<iostream>
using namespace std;

int a[9],n,m,sa=0,sb=0;

int main()
{
	cin>>n>>m;
	int ft=7,t;
	for(int i=1;i<=8;++i) a[i]=1;a[1]=15;
	for(int i=1;i<=n;++i)
	{	
		cin>>t;
		sa+=t;
		if(t==1||(a[1]==0&&ft!=1&&ft!=0)) --a[t];
		if(i==n)
		{
			if(t==0) sb+=4;			
			if(a[1]>=1)
			{
				if((ft>1&&t>1)||(ft==1&&t==1)) 
					if(t<=4) sb+=4,sa-=t;else sb+=t,sa-=t;				
			}
			else if(ft>1)
			{
				int p=1;
				while(a[p]==0) ++p;
				if(t>p)
					if(t<=4) sb+=4,sa-=t;else sb+=t,sa-=t;					
			}			
		}		
		//cout<<ft<<" "<<t<<" "<<sa<<endl;
		ft=t;
	}
	for(int i=1;i<=m;++i)
	{	
		cin>>t;
		sb+=t;
		if(t==1||(a[1]==0&&ft!=1&&ft!=0)) --a[t];
		if(i==m)
		{
			if(t==0) sa+=4;			
			if(a[1]>=1)
			{
				if((ft>1&&t>1)||(ft==1&&t==1)) 
					if(t<=4) sa+=4,sb-=t;else sa+=t,sb-=t;					
			}
			else if(ft>1)
			{
				int p=1;
				while(a[p]==0) ++p;
				if(t>p)
					if(t<=4) sa+=4,sb-=t;else sa+=t,sb-=t; 				
			}			
		}
		ft=t;
	}
	cout<<sa<<" "<<sb;
	return 0;	
}

