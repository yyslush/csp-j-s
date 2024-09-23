#include<iostream>
//#include<cstdio> 
using namespace std;
int main()
{
	long long n,t=0;
	//freopen("test/test0.in","r",stdin);
    //freopen("test/test0.out","w",stdout);
    cin>>n;
    if (n<0) {cout<<"-";n=-n;}
    while(t==0)
    {
    	if (n%10!=0) t=1;
    	else n/=10;
	}
    while(n>0)
    {
    	cout<<n%10;
    	n/=10;
	}
	
	//fclose(stdin);  
   	//fclose(stdout);
   	return 0;
}
