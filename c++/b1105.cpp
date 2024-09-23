#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	//freopen("test/test5.in","r",stdin);
    //freopen("test/test5.out","w",stdout);
    int n,a[105];
	cin>>n;
	for(int i=1;i<=n;++i) cin>>a[i];
	for(int i=n;i>1;--i) cout<<a[i]<<" ";
	cout<<a[1];
	//fclose(stdin);  
   	//fclose(stdout);	
	return 0;
}

