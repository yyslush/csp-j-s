#include<iostream>
using namespace std;
int main()
{
	int n;	
	long long t,a1=0,a2=0,b1=0,b2=0;
	//freopen("test/test6.in","r",stdin);
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>t;
		a1+=t%100000000000;
		a2+=t/100000000000;
	}
	for(int i=1;i<=n;++i)
	{
		cin>>t;
		b1+=t%100000000000;
		b2+=t/100000000000;
	}
	a2+=a1/100000000000;
	b2+=b1/100000000000;
	if ((a2>b2)or(a2=b2 and a1>b1)) 
	{
		cout<<"win"<<endl;
		if(a2==0) cout<<a1%100000000000<<endl;else cout<<a2<<a1%100000000000<<endl;
		if(b2==0) cout<<b1%100000000000<<endl;else cout<<b2<<b1%100000000000<<endl;
	}
	else
	{
		cout<<"win"<<endl;
		if(a2==0) cout<<a1%100000000000<<endl;else cout<<a2<<a1%100000000000<<endl;
		if(b2==0) cout<<b1%100000000000<<endl;else cout<<b2<<b1%100000000000<<endl;
	}
	//fclose(stdin);
	return 0;
}
