#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
	//freopen("test/test5.in","r",stdin);
    //freopen("test/test5.out","w",stdout);
    int a,k=1,i,max=0;    
    for(i=2;i<=100;++i)
    {
    	max=0;
    	for (int j=1;j<i;++j)
			if (i%j==0) max=max+j;						
		if (i==max) 
		{
			if (k==2) {cout<<a<<" ";k=1;}
			a=i;++k;
		}
						
	}  
	cout<<a;
    //fclose(stdin);   
   	//fclose(stdout);	 
	return 0;
}

