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
		
		if (su(i))
		{
			int c=0,b=i;
			while(b>0)
			{
				c=c*10+b%10;
				b/=10;
			}
			if (su(c))
			{
				if (k==2)
				{
					cout<<a<<",";k=1;
				}
				a=i;++k;
			}
		}
	
	}  
	if(k==1) cout<<"No";else cout<<a;
	fclose(stdin);
	fclose(stdout);
    return 0;
}
bool su(int n)
{
	if(n==1) return false ;
	else  for (int j=2;j<=(int(sqrt(n)));++j)
        if (n%j==0) return false;
    return true;            
}
