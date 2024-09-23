#include<iostream>
#include<cstring>
using namespace std;
int main ()
{
	//freopen("test/test0.in","r",stdin);
    //freopen("test/test5.out","w",stdout);
    int n,t,l=0,a[10001],b[10001],g[10001],k[10001],max=0,x,y;
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    memset(g,0,sizeof(g));
    memset(k,0,sizeof(k));
    cin>>n;
    for(int i=1;i<=n;++i) cin>>a[i]>>b[i]>>g[i]>>k[i];
    cin>>x>>y;
    for (int i=i;i<=n;++i)
    	if((x>=a[i]&&x<=(g[i]+a[i]-1))&&(y>=b[i]&&y<=(k[i]+b[i]-1))) max=i;
	if (max>0)	cout<<max; else cout<<"-1";
	//fclose(stdin);   
   	//fclose(stdout);	
	return 0;
}

