#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
string a[15005];
int n;
struct arrs
{
	int x,y;
} b[15005];

bool cmp(arrs a,arrs b)
{
	return((a.x>b.x)||(a.x==b.x)&&(a.y<b.y));
}

int main()
{
	freopen("test/queue2.in","r",stdin);
	cin>>n;
	for(int i=1;i<=n;++i) 
	{
		cin>>a[i];
		b[i].x=a[i].length();
		b[i].y=i;
	}	
	sort(b+1,b+n+1,cmp);
	for(int i=1;i<=n;++i) cout<<a[b[i].y]<<endl;
	fclose(stdin);
	return 0;		
}
