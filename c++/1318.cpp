#include<iostream>
#include<algorithm>
using namespace std;
int n,k;
struct food
{
	string name;
	int score=0;
} f[10005];

bool cmp(food x,food y)
{
	return ((x.score>y.score)||(x.score==y.score&&x.name<y.name));
}
int find(string s,int l,int r)
{
	while(l<=r)
	{
		int mid=(l+r)/2;
		if(f[mid].name==s) return(mid);
		if(f[mid].name>s) r=mid=1;
		if(f[mid].name<s) l=mid+1;
	} 
}

int main()
{
	cin>>n;
	for(int i=1;i<=n;++i)
		cin>>f[i].name;
	sort(f+1,f+n+1,cmp);
	cin>>k;
	for(int i=1;i<=k;++i)
	{
		food x;
		cin>>x.name>>x.score;
		f[find(x.name,1,n)].score+=x.score;		
	}
	sort(f+1,f+n+1,cmp);
	for(int i=1;i<=n;++i)
		cout<<f[i].name<<" "<<f[i].score<<endl;
	return 0;
}
