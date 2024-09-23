#include <iostream>
#include <cstdio>
using namespace std;
int main ()
{
	//freopen("test/test1.in","r",stdin);
    //freopen("test/test1.out","w",stdout);
    int n,k,a=0,b=0,c=0,d=0;
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>k;
		if (k>=0&&k<=18) ++a;
		if (k>=19&&k<=35) ++b;
		if (k>=36&&k<=60) ++c;
		if (k>=61) ++d;
	} 
	printf("%0.2lf%s\n",a*1.0/n*100,"%");
	printf("%0.2lf%s\n",b*1.0/n*100,"%");
	printf("%0.2lf%s\n",c*1.0/n*100,"%");
	printf("%0.2lf%s",d*1.0/n*100,"%");
	//fclose(stdin);  
   	//fclose(stdout);	
	return 0;
}

