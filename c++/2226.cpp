#include<iostream>
using namespace std;

int x[5],y[5],sy=0,sx=0;

int main()
{
	for(int i=1;i<=4;++i)
	{
		cin>>x[i]>>y[i];
		sx+=x[i];
		sy+=y[i];
	}
	if (((sy%4==0)&&(sx%4==2))||((sy%4==2)&&(sx%4==0))) cout<<"zhisi";
	else if (sx%4==2)
	{
		if(sy%4==0) cout<<"wansi";else cout<<"fangsi";
	}		
	else if (sy%4==2)
	{
		if (sx%2==0) cout<<"wansi";cout<<"fangsi";
	}*/		
	return 0;	
}
