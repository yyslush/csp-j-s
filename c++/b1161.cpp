#include<iostream>
#include<cmath>
using namespace std;
bool su(int);
int main ()
{
    //freopen("test/test5.in","r",stdin);
    freopen("test/test0.out","w",stdout);
    int a=0,b,i,k=1; 
    bool f,t;   
    for(i=8;i<=100;++i)    
        for (int j=2;j<=i/2;++j)
	    if (su(j)&&su(i-j))  
		{
			cout<<i<<"="<<j<<"+"<<i-j<<endl; 
			break; 
		}      
    //fclose(stdin);   
    fclose(stdout);    
    return 0;
}
bool su(int a)
{
	 for (int j=2;j<=(int(sqrt(a)));++j)
         if (a%j==0) return false;
	return true;				
}
