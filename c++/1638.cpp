#include<iostream>
#include<cstdio>
using namespace std;
long long a[1000005],b[1000005],c[1000005],ma=-1000000001,t=0;
int main()
{
	int n,p;
	bool f;
	cin>>n>>p;
	for(int i=1;i<=n;++i) scanf("%lld",&a[i]);	
	for (int i=1;i<=n;++i)
	{
		t+=a[i];
		if (t>ma) ma=t;
		if (t<0) t=0;
		b[i]=ma;
	}	
    c[1]=b[1];
    c[2]=b[1]+c[1];
    if (c[2]>=c[1]) f=true;    
    for (int i=3;i<=n;i++)
      {
         if (b[i-1]>0)
           {
             c[i]=c[i-1]+b[i-1];
             if (c[i]>c[1]) f=true;
             if (c[i]>1000000000) c[i]%=p;
           }
         else
             c[i]=c[2];  
      }
    if (!f) ma=c[1]; else ma=c[n];
    ma%=p; 
    printf("%lld",ma);  
 	return 0; 	
}
