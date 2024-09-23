#include<iostream>
#include<cstring>
using namespace std;
int a[55][55],b[55][55],r,c,h,t=0;
int main()
{
	cin>>r>>c>>h;
	memset(a,1,sizeof(a));
	memset(b,0,sizeof(b));
	for(int i=1;i<=r;++i)
   		for(int j=1;j<=c;++j) 
		   {
		   		cin>>a[i][j];b[i][j]=a[i][j];
		   }
   	for(int i=2;i<=r;++i)
	    for(int j=1;j<=c;++j) 
		if(b[i][j]<=b[i-1][j]-10) b[i][j]=b[i-1][j]-10;
	//for(int i=1;i<=r;++i)
	//{
	//	for(int j=1;j<=c;++j) cout<<b[i][j]<<" ";
	//	cout<<endl;
	//}
   		 
	for(int i=1;i<=r;++i)
	    for(int j=1;j<=c;++j) 
			if(b[i][j]<h&&a[i][j]==0)
			{	
				if (a[i][j-1]==0)
				{
					++t;
				//	cout<<i<<" "<<j<<" "<<t<<endl;
				}
				if (a[i][j+1]==0) 
				{
					++t;
				//	cout<<i<<" "<<j<<" "<<t<<endl;
				}
	    	}
	 cout<<t;
	 return 0;		
}

