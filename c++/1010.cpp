#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	bool f=true;
	cin>>n;
	for (int i=2;i<=floor(sqrt(n));i++ )
      if (n % i==0) {f=false;break;}
    if (f&&(n>2))cout<<"T";else cout<<"F";
	return 0;
	}
