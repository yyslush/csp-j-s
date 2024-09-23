#include<bits/stdc++.h>
using namespace std;
struct data
{
	int x,y;
} a[200005];
int t,k,n,val;
queue<int> q;

bool cmp(data a,data b)
{
	return a.x<b.y;
}
int main()
{
	cin>>n>>t>>k;a[0].x=0;a[0].y=0;
	for(int i=1;i<=n;++i) cin>>a[i].x;
	for(int i=1;i<=n;++i) cin>>a[i].y;
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;++i) a[i+n]=a[i];
	for(int i=1;i<=2*n;++i)
	{
		if(i>n) a[i].x+=a[n].x;
		a[i].y+=a[i-1].y;
	}
	q.front=1,val=a[1].y;
	int l=q.back-q.front,i=1;	
	while(i<2*n)
	{
		if(a[++i].x-a[q.front()]<=k)
		{
			q.push(a[i].x);
			if(val<a[i].y-a[q.front()-1].y;) val=a[i].y-a[q.front()-1].y;
		} 	
	}
	 
	
}

