#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    //freopen("test/test5.in","r",stdin);
    //freopen("test/test5.out","w",stdout);	
    int t=0;
    for (int i=1;i<=1000;++i)
	{
		int s=i,a=0,l=0;
		while(s>0)
		{
			++l;
			if (s & 1==1) ++a;
			s=s>>1;
			
		}		
		if (l-a<a) ++t;
	}  
	cout<<t<<" "<<1000-t;
	//fclose(stdin);
	//fclose(stdout);
    return 0;
}
