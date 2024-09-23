#include<iostream>
using namespace std;

int n,q,list[1005];

int main()
{
	cin>>n>>q;
	for(int i=1;i<=n;++i) cin>>list[i];
	for(int i=1;i<=q;++i)
	{
		int l,pa;
		cin>>l>>pa;
		int divi=1;
		for(int j=1;j<=l;++j) divi*=10;
		int mi=10000001;
		for(int j=1;j<=n;++j)
			if((list[j]%divi==pa)&&(mi>list[j])) mi=list[j];
		if (mi!=10000001) cout<<mi<<endl; else cout<<-1<<endl;			
	}
	return 0;
}
