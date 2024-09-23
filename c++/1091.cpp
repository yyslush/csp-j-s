#include<iostream>
#include<queue>
#include<cstring>
#include<string>
using namespace std;
queue<int> x,y;
int t[45][45],n,m;
void init()
{
	cin>>n;
	memset(t,1,sizeof(t));
	for(int i=1;i<=n;++i)
	{
		string tt;
		cin>>tt;
		for(int j=0;j<n;++j) 		
			t[i][j+1]=tt[j]-'0';			
	}			
}
int bfs(int a,int b)
{
	const int gx[4]={0,0,1,-1};
    const int gy[4]={1,-1,0,0};
    int h=1,ta=1,p[1605];
	x.push(a);y.push(b);t[a][b]=1;p[1]=1;
	while(!(x.empty()))
	{
		for(int j=0;j<=3;++j)
			if (x.front()+gx[j]>=1&&x.front()+gx[j]<=n&&y.front()+gy[j]>=1&&y.front()+gy[j]<=n&&t[x.front()+gx[j]][y.front()+gy[j]]==0) 
			{
				x.push(x.front()+gx[j]);y.push(y.front()+gy[j]);
				p[++ta]=p[h]+1;
				if(x.back()==n&&y.back()==n) return(p[ta]);
				t[x.back()][y.back()]=1;													
			}
		x.pop();y.pop();++h;	
	}			
}
int main()
{
	init();
	cout<<n*n-bfs(1,1);	
	return 0;	
}
