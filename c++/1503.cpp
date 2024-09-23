#include<iostream>
#include<cstring>
using namespace std;
 
int a[100],b[100],label[100],n,p;
 
int main()
{
    cin>>p;
    cin>>n;
    for (int i=0;i<n;++i) cin>>a[i];
    if (p==1)
    {
        for (int i=0;i<n;++i)
        {
            b[i]=0;
            int t=0;
            for(int j=i-1;j>=0;--j)
                if (a[i]>a[j]) ++t;
            b[i]=t;
        }
        cout<<"B=(";
    }
    else
    {
        memset(label,sizeof(label),0);
        memset(b,sizeof(b),0);
        for (int i=n-1;i>=0;--i)
        {
            int j=0,p=0;
            while(a[i]+1>p)
			{
				if(label[j]==0) ++p;
				++j;
			}				
            b[i]=j-1;
            label[j-1]=1;
			
        }
        cout<<"A=(";
    }
    for(int i=0;i<n-1;++i) cout<<b[i]<<",";cout<<b[n-1]<<")";
    return 0;
}
