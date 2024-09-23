#include<iostream>
using namespace std;
int n,maxn,minn,a[5];

int main()
{
    cin >> n;
    while(n != 6174)
    {       
   		a[1]=n / 1000;
   		a[2]=n / 100 % 10;
    	a[3]=n / 10 % 10;
    	a[4]=n % 10;
    	for (int i=1;i<=3;i++)
      		for (int j=i+1;j<=4;j++)
        		if (a[i] < a[j])
          		{
           			int t;
					t= a[i];a[i]=a[j];a[j]=t;
          		}
    	maxn=a[1]*1000 + a[2]*100 + a[3]*10 + a[4];
    	minn=a[4]*1000 + a[3]*100 + a[2]*10 + a[1];
    	cout <<maxn<< "-" <<minn<< "=" <<maxn-minn<<endl;
    	n=maxn-minn;
	}
    return 0;
}
