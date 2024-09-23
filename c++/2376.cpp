#include<iostream>
using namespace std;
int main()
{
	int data1,data2,k=0,m,d,ans=0,da=0;
	cin>>data1>>data2;
	for(int i=data1/10000;i<=data2/10000;i++)
	{
		k=i;
		m=k%100;
		m=(m%10)*10+m/10;
		d=k/100;
		d=(d%10)*10+d/10;
		da=k*100+m;
		da=da*100+d;	
		if ((d>=1)&&(m<=12)&&(da<=data2))
		{
			if ((d<=31)&&(m==1||m==3||m==5||m==7||m==8||m==10||m==12)) 	ans++;	
			if ((d<=30)&&(m==4||m==6||m==9||m==11)) ans++;
			if((m==2)&&(d<=29)&&((k%4==0)&&(k%100!=0)||(k%400==0)))	ans++;
		}
	}
	cout<<ans;
	return 0;
	
}
