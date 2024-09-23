#include<iostream>
using namespace std;
int main()
{
	int n,a=0,b=0,c=0,x,max=0;
	//freopen("test/test5.in","r",stdin);
    //freopen("test/test5.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;++i)
	  {
	  	cin>>x;	  	a+=x;
	  	cin>>x;	  	b+=x;
	  	cin>>x;	  	c+=x;
	  	max=a+b+c;
	  } 
	cout<<a<<" "<<b<<" "<<c<<" "<<max;
	//fclose(stdin);  
    //fclose(stdout); 
	return 0;  
}
