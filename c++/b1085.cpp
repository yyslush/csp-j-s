#include<iostream>
#include<cstdio> 
using namespace std;
int main()
{
	double h,l=0.0;
	
	freopen("test/test0.in","r",stdin);
    freopen("test/test0.out","w",stdout);
    cin>>h;h*=1.0;l=h;
    for(int i=2;i<=10;++i) 
 	{
 		h=h/2;
		l=l+h*2;
	 }
	 h/=2;
	 cout<<l<<endl<<h<<endl;
    fclose(stdin);  
   	fclose(stdout);
   	return 0;
}
