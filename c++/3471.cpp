#include<cstdio>
using namespace std;

int gcd(int x,int y);

int main()
{
	int i,cas,n,a,b,k,m,s,j;
	scanf("%d",&cas);
	for(i=0;i<cas;i++)
	{
		scanf("%d%d",&a,&b);
		if(a==1&&b==1) k=1;
		if((a==1&&b%2==0)||(a%2==0&&b==1)) k=1;
		else
		{
			if((gcd(a,b)!=1||(a+b)%2==0)) k=0;
			else
			{
				if((a+b)%2!=0) k=1;
			}
		}
		if(k==1)printf("y");
		if(k==0)printf("n");
	}
return 0;
}

int gcd(int x,int y)
{
	int t;
	while(y!=0)
	{
		x=x%y;
		t=x;
		x=y;
		y=t;
	}
	return x;
}
