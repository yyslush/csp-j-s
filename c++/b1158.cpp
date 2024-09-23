#include<iostream>
#include<cmath>
using namespace std;
int lei(int);
int main ()
{
	//freopen("test/test0.out","w",stdout);
	int a,k=1;
	bool f;
	for (int i=100;i<=999;++i)
	{
		f=true;
		for (int j=2;j<=int(sqrt(i));++j)
		if (i % j==0) { f=false;break;	}
		if(f)
		{
			if (k==2){cout<<a<<" ";k=1;	}
			if (i/100==i%10) {a=i;++k;	}			
		}
	}
	cout<<a;
	//fclose(stdout);
	return 0;
    
}
