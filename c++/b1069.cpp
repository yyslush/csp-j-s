#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double x;
	long a,n;
	freopen("test/test4.in","r",stdin);
    freopen("test/test4.out","w",stdout);
    cin>>a>>n;
    for (int i=1;i<=n;++i)  x*=1.001;
    printf("%0.4lf",x);
	fclose(stdin);  
    fclose(stdout); 
	return 0;  
}
