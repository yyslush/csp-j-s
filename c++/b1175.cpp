#include<iostream>
#include<cmath>
using namespace std;
bool su(int);
int main()
{
    freopen("test/test5.in","r",stdin);
    freopen("test/test5.out","w",stdout);
	int n,m,k=1,a;
	cin >>m>> n;
    for (int i=m;i<=n;++i)
	{
		int j=i;
		while(i%j!=0||su(j)==false) --j;		
		if (k==2)
		{
			cout<<a<<",";k=1;
		}
		a=j;++k;
		
	}  
	cout<<a;
	fclose(stdin);
	fclose(stdout);
    return 0;
}
bool su(int n)
{
    for (int j=2;j<=(int(sqrt(n)));++j)
        if (n%j==0) return false;
    return true;            
}
