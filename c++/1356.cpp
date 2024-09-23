#include<iostream>
#include<cstring>
using namespace std;
int list[1005][1005],n,m,p,q,maxs=0;

int main()
{
	cin>>n>>m>>p>>q;
	memset(list,0,sizeof(list));
	for(int i=1;i<=n;++i)
		for(int j=1;j<=m;++j)
		{
			int t;
			cin>>t;
			list[i][j]=list[i-1][j]+t;
			
		}
	for(int i=1;i<=n-p+1;++i)
		for(int j=1;j<=m-q+1;++j)
		{
			int odds=0,eves=0;		
			for(int k=j;k<=q+j-1;++k)
				if(k%2==0) odds+=list[i+p-1][k]-list[i-1][k];
				else eves+=list[i+p-1][k]-list[i-1][k];
			//cout<<i<<" "<<j<<" "<<odds<<" "<<eves<<endl;
			int s;
			if (odds-eves>eves-odds) s=odds-eves; else s=eves-odds;	
			if (s>maxs) maxs=s;
		}
	cout<<maxs;
	return 0;		
}
