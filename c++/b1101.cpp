#include <iostream>
#include <cmath>
using namespace std;
int main ()
{

	//freopen("test/test4.in","r",stdin);
    //freopen("test/test4.out","w",stdout);
	int a,b,c,x,y,count=0;
	cin>>a>>b>>c;
	for(x=0;x<=c;++x)
	{
		for(y=0;y<=c;++y)
		{
			if(a*x+b*y==c) 
			{
				++count;
				//cout<<x<<" "<<y<<endl;
			}
		}
	}
	cout<<count;
	//fclose(stdin);  
   	//fclose(stdout);	
	return 0;
}

