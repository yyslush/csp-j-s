#include<iostream>
#include<cstring>
using namespace std;
bool ini(int,int);
void putit(int,int);
int a[1005],ans=0;
int main ()
{
    //freopen("test/test9.in","r",stdin);
    //freopen("test/test5.out","w",stdout);
    int n,m,t; 
    cin>>n>>m;
    memset(a,-1,sizeof(a));
    for(int i=1;i<=m;++i)  
    {
    	cin>>t;
		if (ini(t,n)==false)  
		{
			++ans;
			putit(t,n);
			//for(int j=1;j<=n;++j) cout<<a[j]<<" ";
			//cout<<endl;
		}
	}
	cout<<ans;	  
    fclose(stdin);   
    //fclose(stdout);    
    return 0;
}
bool ini(int n,int j)
{
	int i=1;
	while(a[i]!=n&&i<=j) ++i;
	if (i>j)   return false; else return true;            
}
void putit(int t,int i)
{
	for (int j=1;j<=i-1;++j) a[j]=a[j+1];
	a[i]=t;
}
