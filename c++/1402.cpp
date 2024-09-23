#include<iostream>
using namespace std;
int n;

int main()
{
	cin>>n;
	if(n<49) cout<<"No such number!";
	else
	{
		int p=0;
		for(int i=49;i<=n;++i)
		{
			int s=0,t=i;
			while(t>0)
			{
				s=s+t%10;
				t/=10;
			}
			//cout<<p<<" "<<s<<endl;
			if(s==13)
			{
				++p;
				if(p<=8) cout<<i<<" ";
			    else
			    {
			    	cout<<endl<<i<<" ";
			    	p=1;
				}
			}			
		}		
	}
	return 0;
}
