#include<iostream>
#include<cstring>
using namespace std;
int main ()
{
	//freopen("test/test5.in","r",stdin);
    //freopen("test/test5.out","w",stdout);
    int n,t,a[10000],max=0;
    memset(a,0,sizeof(a));
    cin>>n;
    for(int i=1;i<=n;++i) 
    {
    	cin>>t;
    	++a[t];	
		if (t>max) max=t;   	
	}
	for (int i=0;i<=max;++i) cout<<a[i]<<endl;
	//fclose(stdin);   
   	//fclose(stdout);	
	return 0;
}

