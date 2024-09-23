#include<iostream>
#include<cstring>
using namespace std;
int main ()
{
	//freopen("test/test1.in","r",stdin);
    //freopen("test/test1.out","w",stdout);
    int n,a,max=0,min=10001;
    cin>>n;
    for(int i=1;i<=n;++i) 
    {
    	cin>>a;
    	if (a>max) 	max=a;
    	if (a<min)  min=a;
	   	
	}
	cout<<max-min;
	//fclose(stdin);  
   	//fclose(stdout);	
	return 0;
}

