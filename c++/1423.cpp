#include<iostream>
#include<algorithm>
using namespace std;

int n;
long long m,ans=0;
struct fish
{
	int nu;
	int ti;
}a[100005];

bool cmp(fish x,fish y)
{
	return(x.ti<y.ti);
}

int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;++i) cin>>a[i].nu;
	for(int i=1;i<=n;++i) cin>>a[i].ti;
	sort(a+1,a+n+1,cmp);
	//for(int i=1;i<=n;++i) cout<<a[i].nu<<" ";cout<<endl;
	//for(int i=1;i<=n;++i) cout<<a[i].ti<<" ";cout<<endl;
	int p=0;
	while(m>=a[++p].ti*a[p].nu&&p<=n)
	{
		ans+=a[p].nu,m-=a[p].ti*a[p].nu;				
	}
	if(m>0&&p<=n) ans+=m/a[p].ti;
	cout<<ans;
	return 0;
}
