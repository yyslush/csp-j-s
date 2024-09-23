#include<iostream>
#include<cstring>
using namespace std;
int main ()
{
	//freopen("test/test9.in","r",stdin);
    //freopen("test/test5.out","w",stdout);
    int a,b,max=0,k=0;
    for(int i=1;i<=7;++i) 
    {
    	cin>>a>>b;
    	if (a+b>8&&a+b>max) 
    	{
    		k=i;
    		max=a+b;
		}
		
   	
	}
	cout<<k;
	//fclose(stdin);  
   	//fclose(stdout);	
	return 0;
}

