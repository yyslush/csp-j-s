#include<iostream>
#include<cstring>
using namespace std;
int main ()
{
	//freopen("test/test5.in","r",stdin);
    //freopen("test/test5.out","w",stdout);
    int n,a,max=-1000005,t=0;
    long long s=0;
    cin>>n;
    for(int i=1;i<=n;++i) 
    {
    	cin>>a;
    	s+=a;
		if (max==a)  ++t;
    	if (a>max) 	
		{
			max=a;
			t=1;
		}
    	
	   	
	}
	cout<<s-max*t;
	//fclose(stdin);  
   	//fclose(stdout);	
	return 0;
}

