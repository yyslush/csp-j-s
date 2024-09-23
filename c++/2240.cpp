#include<iostream>
#include<queue>
#include<cstring>
using namespace std;
int a[101][101],maxn,ans=0,n,k;;
bool b[101];
void gra()
{
	cin>>n>>k;
	memset(a,0,sizeof(a));
	for(int i=1;i<=k;++i)
	{
		int t,tt;
		cin>>t>>tt;
		a[t][tt]=1;a[tt][t]=1;
	}	
}
int co(int x)
{
	queue<int> q;
	int m=1;
	q.push(x);b[x]=false;
	while(!(q.empty()))
	{
		for(int j=1;j<=n;++j)
			if (a[q.front()][j]&&b[j]==true) 
			{
				q.push(j);
				++m;
				b[j]=false;			
			}
		q.pop();		
	}
	++ans;
	if (m>maxn) maxn=m;			
}
int main()
{
	memset(b,true,sizeof(b));
	gra();
	for (int i=1;i<=n;++i) if(b[i]) co(i);
	cout<<ans<<" "<<maxn;
	return 0;	
}
