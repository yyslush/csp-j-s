#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;
int a[1000005],n;
stack<int> b;

int main()
{
	cin>>n;
	for(int i=1;i<=n;++i) scanf("%d",&a[i]);
	sort(a+1,a+n+1);
	a[0]=0;
	int p=n,v=0;	
	while(p>=1)
	{
		int q=p;
		while(a[q]==a[q-1]) --q;
		int t=p-q+1;
		//cout<<p<<" "<<q<<" "<<t<<endl;
		if(t>v)
		{
			while(!b.empty()) b.pop();
			b.push(a[p]);
			v=t;
			p=q;
			//cout<<b.top()<<endl;
		}			
		else if(v==t)
			b.push(a[p]),p=q;	
		--p;			
	}
	cout<<b.size()<<endl;
	while(!b.empty()) cout<<b.top()<<" ",b.pop();
	return 0;
}
