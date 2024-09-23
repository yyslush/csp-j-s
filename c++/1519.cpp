#include<iostream>
#include<cstring>
using namespace std;
int p[11];

void countbit(int x)
{
	while(x>0)
	{
		p[x%10+1]=1;
		x/=10;
	}
}


int main()
{
	int n;
	for(int i=123;i<=333;++i)
	{
		memset(p,0,sizeof(p));
		countbit(i);
		countbit(i*2);
		countbit(i*3);
		n=0;
		for(int j=1;j<=9;++j) 
			if (p[j+1]==1) ++n;			
		if (n==9) cout<<i<<" "<<i*2<<" "<<i*3<<endl;			
	}
	return 0;
}
