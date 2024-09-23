#include<iostream>
#include<cstdio> 
using namespace std;
int main()
{
	int n,a,b,m;
	//freopen("test/test5.in","r",stdin);
    //freopen("test/test5.out","w",stdout);
    cin>>a>>b>>n;
 	for(int i=1;i<=n;++i)
 	{
 		a=(a%b)*10;
 		m=a/b;
	 }
	cout<<m; 
	return 0;
    //fclose(stdin);  
   	//fclose(stdout);
}
