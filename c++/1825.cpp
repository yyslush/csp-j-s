#include<iostream>
#include<algorithm>
using namespace std;

int n,m;
struct da
{
    string wor;
    int page;
}a[20005];
string s;

bool cmp(da x,da y)
{
    return(x.wor<y.wor);
}

void find(int l,int r,string s)
{
    int mid=(l+r)/2;
    if(a[mid].wor==s)
	{
		cout<<a[mid].page<<endl;
		return ;
	}
	 
    if(a[mid].wor>s)
        find(l,mid-1,s);
    else
        find(mid+1,r,s);
}

int main()
{
    cin>>n;
    for(int i=0;i<n;++i) cin>>a[i].wor>>a[i].page;
    sort(a,a+n,cmp);     
    cin>>m;   
    for(int i=1;i<=m;++i)
    {
        cin>>s;
        find(0,n-1,s);
    }
    return 0;
}
