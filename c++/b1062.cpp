#include<iostream>
using namespace std;
int main()
{
	int n,a,max=-1,min=1001;
	freopen("test/test5.in","r",stdin);
    freopen("test/test5.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;++i)
	  {
	  	cin>>a;
	  	if (a<min) min=a;
	  	if (a>max) max=a;
	  } 
	cout<<max-min;
	fclose(stdin);  
    fclose(stdout); 
	return 0;  
}
