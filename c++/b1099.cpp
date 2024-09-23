#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	int n,i=1,t=0;
	//freopen("test/test4.in","r",stdin);
    //freopen("test/test4.out","w",stdout);
int n,i,j;
	scanf("%d", &n);
	int ans = 0, count=0;
	i=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			ans+=i;
			count++;
			if(count==n)
			{
				printf("%d", ans);
				
				return 0;
			}
				
		}
	//fclose(stdin);  
   	//fclose(stdout);	
	return 0;
}

