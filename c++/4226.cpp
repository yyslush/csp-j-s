#include<iostream>
#include<cmath>
using namespace std;
int a[100005],n,m,s1,s2,p1,p2;
long long dr=0,ti=0;

int main()
{
	cin>>n;
	for(int i=1;i<=n;++i) cin>>a[i];
	cin>>m>>p1>>s1>>s2;
	for(int i=1;i<m;++i) dr+=a[i]*(m-i);
	for(int i=m+1;i<=n;++i) ti+=a[i]*(i-m);
	if(p1>m) ti+=s1*(p1-m);
	if(p1<m) dr+=s1*(m-p1);
	cout<<dr<<" "<<ti<<endl;
	if(dr==ti) p2=m;
	if(dr>ti)
	{
		int t=dr-ti;
		p2=round(t*1.0/s2-0.01)+m;
		if(p2>n) p2=n;
	}
	if(dr<ti)
	{
		int t=ti-dr;
		cout<<t<<endl;
		p2=m-round(t*1.0/s2-0.01);
		if(p2<1) p2=1;
	}
	cout<<p2;
	return 0;
}
