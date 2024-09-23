#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int h,l,a;
    char ch;
    //freopen("test/test1.in","r",stdin);
    //freopen("test/test1.out","w",stdout);
    cin>>h>>l>>ch>>a;
    for (int i=1;i<=h;++i)
     	if (a==0&&i!=1&&i!=h)
    	{
    		cout<<ch;
    		for(int j=2;j<l;++j) cout<<" ";
    		cout<<ch<<endl;
		}
		else 
		{
			for (int j=1;j<=l;++j) cout<<ch;
			cout<<endl;
		}
	      
    //fclose(stdin);  
   	//fclose(stdout);
    return 0;
}
