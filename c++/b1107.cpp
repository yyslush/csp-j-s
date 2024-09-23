#include<iostream>
#include<cstring>
using namespace std;
int main ()
{
	freopen("test/test5.in","r",stdin);
    freopen("test/test5.out","w",stdout);
    long long s=0;
    int a[1005],n,b;
	cin>>n;
	for(int i=1;i<=n;++i) cin>>a[i];
	for(int i=1;i<=n;++i)
	{
		cin>>b;
		s+=a[i]*b;
	 } 
	cout<<s;		
	fclose(stdin);  
   	fclose(stdout);	
	return 0;
}

