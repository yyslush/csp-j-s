#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
int main ()
{
	freopen("test/test1.in","r",stdin);
    freopen("test/test1.out","w",stdout);
    int n;
    bool fax=true,fin=true;
    double a[305],s=0.0,max=-1.0,min=99999.87,f=0.0;
    cin>>n;
    for(int i=1;i<=n;++i) 
    {
    	cin>>a[i];
    	s+=a[i];
	   	if (a[i]>max) max=a[i];
		if (a[i]<min)  min=a[i];   	
	}
	s=s-max-min;
	s/=n-2;
	//cout<<max<<" "<<min<<" "<<s<<endl;
	for (int i=1;i<=n;++i)
	{
		if(a[i]==max&&fax)  {fax=false;a[i]=-1.0;	}
		if(a[i]==min&&fin)  {fin=false;a[i]=-1.0;	}
	}
	for(int i=1;i<=n;++i)	if(fabs(s-a[i])>f&&a[i]>=0) f=fabs(s-a[i]);
	printf("%0.2lf %0.2lf",s,f);
	fclose(stdin);   
   	fclose(stdout);	
	return 0;
}

