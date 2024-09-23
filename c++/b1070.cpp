#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	long long n,a=1,b=1,c=1;
	//freopen("test/test1.in","r",stdin);
    //freopen("test/test1.out","w",stdout);
    cin>>n;
    if ((n==1)||(n==2)) cout<<a;
    else
    {
    	for (int i=1;i<=n-2;++i)
    		{
    			c=a+b;
				a=b;
				b=c;		
			}
		cout<<c;
	}
    //fclose(stdin);  
    //fclose(stdout); 
	return 0;  
}
