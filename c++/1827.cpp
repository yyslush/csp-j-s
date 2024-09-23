#include<iostream>
#include<algorithm>
using namespace std;

int a[20005],n,s,sum=0;

int main()
{
    cin>>n>>s;
    for(int i=1;i<=n;++i) cin>>a[i];
    sort(a+1,a+n+1);
    int l=n;
    while(a[l]>=s) --l;   
	for(int i=l;i>=2;--i)
	{
		int j=1;
		while(a[j]+a[i]<=s&&i!=j) ++j;
		//cout<<j<<endl;
		sum=sum+j-1;
	}
	cout<<sum;
	return 0;
}
