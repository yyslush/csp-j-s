#include<iostream>
#include<cstring>
using namespace std;
int main ()
{
	//freopen("test/test1.in","r",stdin);
    //freopen("test/test1.out","w",stdout);
    int a[5005],n,m;
    memset(a,0,sizeof(a));
	cin>>n>>m;
	for(int i=1;i<=m;++i)
		for(int j=i;j<=n;++j)
			if (j%i==0)
				if(a[j]==1) a[j]=0;else a[j]=1;
	while(a[n]==0) --n;	
	for (int i=1;i<n;++i) 
		if (a[i]==1) cout<<i<<",";	
	cout<<n;		
	//fclose(stdin);  
   	//fclose(stdout);	
	return 0;
}

