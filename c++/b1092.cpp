#include<iostream>
#include<cstdio> 
using namespace std;
int main()
{
	int n;
	float x,s=1.0,t=1.0;
	freopen("test/test4.in","r",stdin);
    freopen("test/test4.out","w",stdout);
    cin>>x>>n;
    for(int i=1;i<=n;++i)
    {
    	t=t*x;
		s+=t;
	}
	printf("%0.2f",s);
	fclose(stdin);  
   	fclose(stdout);
   	return 0;
}
