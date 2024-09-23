#include<iostream>
using namespace std;
int main()
{
	long long s,n;	
	//freopen("test/test1.in","r",stdin);
	//freopen("test/test1.out","w",stdout);
	cin>>n;
	s=n*n*n;
	cout<<s<<"="<<s/n-n+1;
	for(long long  i=s/n-n+3;i<=s/n+n-1;i+=2) cout<<"+"<<i;
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}
