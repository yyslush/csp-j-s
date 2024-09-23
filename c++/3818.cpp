#include<iostream>
#include<cmath>

using namespace std;
int a[257],b[257],n;

void work()
{   
	for(int i=1;i<=n;++i)
	{
		for(int j=1;j<=255;++j)
		{
			if(a[j])
			{
				int m=0,t=j;	
				while(t>0)
				{
					m+=pow(t%10,i+1);				
					t/=10;			
				}
				if(m<=255) b[m]=1;	
			}			
		}
		for(int i=1;i<=255;++i) if(b[i]==1) a[i]=0;	
	}	
	return ;
}

int main()
{
	cin>>n;	
	int x;	
	while(cin>>x) a[x]++; 		
	work();	
	int i=0,t=0;	
	while(i<=255) 	
		if (a[i]>0) 
		{
			++t;
			if (t==1) cout<<i;else cout<<" "<<i;
			a[i]--;
		}	
		else ++i;
	return 0;
}
