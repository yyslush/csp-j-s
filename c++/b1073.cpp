
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,n,k;
	double t=0,l;
	//freopen("test/test1.in","r",stdin);
    //freopen("test/test1.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>b>>c;
		l=sqrt(a*a+b*b);
		k=l/50;
		if (l>k*50) ++k;
		t=t+k*2+c*1.5;
	}
    cout<<ceil(t);	
    //fclose(stdin);  
    //fclose(stdout);
    return 0;
}
