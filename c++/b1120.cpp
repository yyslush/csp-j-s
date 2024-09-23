#include<iostream>
#include<cstring>
using namespace std;
int main ()
{
	//freopen("test/test5.in","r",stdin);
    //freopen("test/test5.out","w",stdout);
    int n,m,x;  
    long long s=0;
	cin>>m>>n;
    for(int i=1;i<=m;++i)
    	for(int j=1;j<=n;++j)
    	{
    		cin>>x;
    		if (i==1||i==m||j==1||j==n) s+=x;
		}
    cout<<s;    		
	//fclose(stdin);   
   	//fclose(stdout);	
	return 0;
}

