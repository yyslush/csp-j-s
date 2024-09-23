#include<iostream>
using namespace std;
int main()
{
	int n,m,x,ans=0;
	freopen("test/test1.in","r",stdin);
    freopen("test/test1.out","w",stdout);
    cin>>n>>m;
	for(int i=1;i<=n;++i)
	  {
	  	   cin>>x;
		   if (x==m) ++ans;
	  }
	 
	cout<<ans;
	fclose(stdin);  
    fclose(stdout); 
	return 0;  
}
