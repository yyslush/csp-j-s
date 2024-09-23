#include<iostream>
using namespace std;
int n,p[10]={6,2,5,5,4,5,6,3,7,6};

int countbit(int x)
{
	if (x<10) return(p[x]);
	if (x<100) return(p[x%10]+p[x/10]);else return(p[x/100]+p[x%10]+p[x%100/10]);
}
int main()
{
	int s=0;
	cin>>n;
	for (int i=0;i<=800;++i)
		for(int j=0;j<=800;++j)
			if(countbit(i)+countbit(j)+countbit(i+j)==n-4) ++s;
	cout<<s;
	return 0;		 
}
