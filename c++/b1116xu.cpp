#include<iostream>
#include<cstring>
using namespace std;
int main ()
{
	freopen("test/test5.in1","r",stdin);
    freopen("test/test5.in","w",stdout);
    int n,a[1005],max=0,k,t;   
    cin>>n;
    for(int i=1;i<=n;++i) cin>>a[i];	
	for(int i=1;i<n;++i)
	{
		k=i;
		for (int j=i;j<=n;++j)
		if (a[j]<a[k])  k=j;
		if(k!=i) 
		{
			t=a[i];a[i]=a[k];a[k]=t;
		}
	}
	cout<<n<<endl;
	for(int i=1;i<n;++i) cout<<a[i]<<" ";cout<<a[n];
	
	fclose(stdin);   
   	fclose(stdout);	
	return 0;
}

