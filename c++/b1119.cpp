#include<iostream>
#include<cstring>
using namespace std;
int main ()
{
	freopen("test/test1.in","r",stdin);
    freopen("test/test1.out","w",stdout);
    int n,x,y;  
	cin>>n>>x>>y; 
    for(int i=1;i<n;++i) cout<<"("<<x<<","<<i<<")"<<" ";cout<<"("<<x<<","<<n<<")"<<endl;
    for(int i=1;i<n;++i) cout<<"("<<i<<","<<y<<")"<<" ";cout<<"("<<n<<","<<y<<")"<<endl;
	if(x>=y)
	{
		for(int i=1;i<n-(x-y);++i) cout<<"("<<i+(x-y)<<","<<i<<")"<<" ";cout<<"("<<n<<","<<n-(x-y)<<")"<<endl;
		
	}
	else 
	{
		for(int i=1;i<n-(y-x);++i) cout<<"("<<i<<","<<i+(y-x)<<")"<<" ";cout<<"("<<n-(y-x)<<","<<n<<")"<<endl;
	}
	for(int i=n;i>=1;--i)
		for(int j=1;j<=n;++j)
		{
			if 	(i+j==x+y&&i>1&&j<n) cout<<"("<<i<<","<<j<<")"<<" ";
			if 	((i==1||j==n)&&i+j==x+y) cout<<"("<<i<<","<<j<<")";	
		}
	fclose(stdin);   
   	fclose(stdout);	
	return 0;
}

