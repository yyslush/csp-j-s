#include <iostream>
#include <cmath>
using namespace std;
int main ()
{

	//freopen("test/test1.in","r",stdin);
    //freopen("test/test1.out","w",stdout);
	int n,i,j;
	cin>>n;
	long long ans = 0, count=0;
	i=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			ans+=i;
			count++;
			if(count==n)
			{
				cout<<ans;
				return 0;
			}
		}
	}
	//fclose(stdin);  
   	//fclose(stdout);	
	return 0;
}

