#include<iostream>
#include<cmath>
using namespace std;
const int cc=100000000;
struct date
{
	int upx,upy,downx,downy;
} a[100005];
int n,sign[5],x1=-cc,y11=-cc,x2=cc,y2=cc,s=0;

int main()
{
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i].upx>>a[i].upy>>a[i].downx>>a[i].downy;
		if(x1<a[i].upx) x1=a[i].upx,sign[1]=i;
		if(y11<a[i].upy) y11=a[i].upy,sign[2]=i;
		if(x2>a[i].downx) x2=a[i].downx,sign[3]=i;
		if(y2>a[i].downy) y2=a[i].downy,sign[4]=i;
	}
	//cout<<x1<<" "<<y11<<" "<<x2<<" "<<y2<<endl;
	//cout<<sign[1]<<" "<<sign[2]<<" "<<sign[3]<<" "<<sign[4]<<endl;
	for(int i=1;i<=4;++i)
	{
		x1=y11=-cc;
		x2=y2=cc;
		for(int j=1;j<=n;++j)
			if(j!=sign[i])
			{
				x1=max(x1,a[j].upx);
				y11=max(y11,a[j].upy);
				x2=min(x2,a[j].downx);
				y2=min(y2,a[j].downy);
			}
		if(s<abs(x2-x1)*abs(y2-y11))	 s=abs(x2-x1)*abs(y2-y11);
	}
	cout<<s;
	return 0;
}
