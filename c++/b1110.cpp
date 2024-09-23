#include<iostream>
#include<cstring>
using namespace std;
int main ()
{
	//freopen("test/test5.in","r",stdin);
    //freopen("test/test5.out","w",stdout);
    int a[10005],n,m,t=-1;
    cin>>n;
	for(int i=1;i<=n;++i) cin>>a[i];
	cin>>m;
	int i=1;
	while(a[i]!=m&&i<=n+1) ++i;
	if(i>n) cout<<t ;else cout<<i;
	//fclose(stdin);  
   	//fclose(stdout);	
	return 0;
}

