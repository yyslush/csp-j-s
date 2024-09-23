#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
	//freopen("test/test5.in","r",stdin);
    freopen("test/test0.out","w",stdout);
    int a=0,b,i,k=1; 
	bool f,t;   
    for(i=10;i<=100;++i)
    {
    	f=true;
		for (int j=2;j<=(int(sqrt(i)));++j)
			if (i%j==0) { f=false;break;}						
		if (f) 
		{
			b=i%10*10+i/10;
			t=true;
			for (int j=2;j<=(int(sqrt(b)));++j)
				if (b%j==0) { t=false;break;}
			if (t) 
			{
					
				if (k==2) {cout<<a<<" ";k=1;}
				a=i;
				++k;
			}
		}						
	}
	cout<<a;  	
    //fclose(stdin);   
   	fclose(stdout);	 
	return 0;
}

