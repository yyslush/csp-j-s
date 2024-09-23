#include <iostream>
using namespace std;
int main()
{
	int m,n,a,b,r;
	cin>>m>>n;
	a=m;b=n;
	if (m<n){r=m;m=n;n=r;}
	r=m%n;
	while(r!=0)
	 {
	 	m=n;n=r;r=m%n;
	 }
	 cout<<n<<" "<<a*b/n;
	 return 0;	
}
