#include<iostream>
#include<cstring>
using namespace std;
int main ()
{
	//freopen("test/test5.in","r",stdin);
    //freopen("test/test5.out","w",stdout);
    int n,a[1005],l=0,k,t=0;   
    cin>>n;
    a[0]=0;
    for(int i=1;i<=n;++i)
	{
	   cin>>a[i];
	   if (a[i]!=a[i-1]) t=1;else ++t;
	   if (t>l) l=t;	
	}
	cout<<l;
	fclose(stdin);   
   	fclose(stdout);	
	return 0;
}

