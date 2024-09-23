#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,a,b;
	double x=0.0,y=0.0;
	//freopen("test/test5.in","r",stdin);
    //freopen("test/test5.out","w",stdout);
    cin>>n;
    cin>>a>>b;
    x=b*1.0/a;
    for (int i=1;i<=n-2;++i)
    	{
    		cin>>a>>b;
			y=1.0*b/a;
			if ((y>x)&&(y-x>0.05)) cout<<"better ";
			else if ((x>y)&&(x-y>0.05)) cout<<"worse ";
			else cout<<"same ";			
		}
	cin>>a>>b;
	y=1.0*b/a;
	if ((y>x)&&(y-x>0.05)) cout<<"better";
			else if ((x>y)&&(x-y>0.05)) cout<<"worse";
			else cout<<"same";
	
    //fclose(stdin);  
    //fclose(stdout); 
	return 0;  
}
