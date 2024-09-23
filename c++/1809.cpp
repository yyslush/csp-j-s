#include<iostream>
#include<cmath>
#include<cstring>
#include<queue>
using namespace std;
bool p[10005];
queue<int> que;
int dis[10005],sum=1,a[5],tt;

void prim()// building prime table;
{
	memset(p,true,sizeof(p));	
	p[0]=false;p[1]=false;
	for(int i=2;i<=100;++i)	
		for(int j=i;j<=10000/i;++j)
		if (p[i]) p[i*j]=false;					
}
int main()
{
	//freopen("test/dd.out","w",stdout);
	int n,m,k;
	cin>>n>>m;
	prim();	
	que.push(n);
	p[n]=false;
	dis[0]=0;k=1;
	do
	{
		for (int i=4;i>=1;--i)
		{
			n=que.front();
			a[1]=n/1000;a[2]=n/100%10;a[3]=n/10%10;a[4]=n%10;			
			for (int j=0;j<=9;++j)
			{
				a[i]=j;
				tt=a[1]*1000+a[2]*100+a[3]*10+a[4];
				if(p[tt]&&tt>1000)
				{
					++sum;
					que.push(tt);					
					dis[sum]=dis[sum-que.size()+1]+1;
					//cout<<tt<<" "<<sum<<" "<<que.size()<<" "<<dis[sum]<<endl;					
					p[tt]=false;
					if (tt==m) {cout<<dis[sum];exit(0);	}
				}				
			}
		}		
			
		que.pop();
	} while(!que.empty());
	cout<<"Impossible";
	//fclose(stdout);
	return 0;	
}
