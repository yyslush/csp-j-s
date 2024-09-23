#include<iostream>
#include<cstdio> 
using namespace std;
int main()
{
	int n=1,k;
	double s=1.0;
	freopen("test/test5.in","r",stdin);
    freopen("test/test5.out","w",stdout);
    cin>>k;
    while(s<=k)
    {
    	++n;
    	s=s+1.2/n;
	}
	cout<<n<<endl;
	//fclose(stdin);  
   	//fclose(stdout);
   	return 0;
}
