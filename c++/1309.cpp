#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int d[50005];

int main()
{
    int n,m,p=0;
    d[0]=-21000000;
    freopen("test/test1.in","r",stdin);
    freopen("test/test0.out","w",stdout);
	scanf("%d",&n);
    for (int i=1;i<=n;i++)
	{
		scanf("%d",&m);
		if(m>d[p]) 
		{
			++p;
			d[p]=m;
			//for(int k=1;k<=p;++k) cout<<d[k]<<" ";
			//cout<<endl;
		}
		else
		{
			//int j=upper_bound(d,d+p,m)-d;
			int l=1,r=p;
			while (l<=r) 
			{
				int mid=(l+r)>>1;
				if (m>d[mid]) l=mid+1; else r=mid-1;
			 } 
			d[l]=m;
			//for(int k=1;k<=p;++k) cout<<d[k]<<" ";
			//cout<<endl;
		}
 	 }     
    
    printf("%d\n",p);    
    fclose(stdin);
    fclose(stdout);
    return 0;
}
