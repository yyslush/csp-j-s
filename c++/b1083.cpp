#include<iostream>
#include<cstdio> 
using namespace std;
int main()
{
	int t,a,b,t1=0,t2=0,t3=0;
	//freopen("test/test5.in","r",stdin);
    //freopen("test/test5.out","w",stdout);
    cin>>a>>b;
    t=a;
 	for(int i=1;i<=b;++i) 
 	{
 		t=t%1000;
 		t1=t%10;
 		t2=t/10%10;
 		t3=t/100;
 		t=t*a;
	 }
	 cout<<t3<<t2<<t1;
    //fclose(stdin);  
   	//fclose(stdout);
   	return 0;
}
