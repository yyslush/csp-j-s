#include<iostream>
//#include<cstdio> 
using namespace std;
int main()
{
	long long n,t=1,s=0;
	//freopen("test/test0.in","r",stdin);
    //freopen("test/test0.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;++i)
    {
    	t*=i;
		s+=t;
	}
	cout<<s;
	//fclose(stdin);  
   	//fclose(stdout);
   	return 0;
}
