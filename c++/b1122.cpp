#include<iostream>
#include<cstring>
using namespace std;
int main ()
{
	//freopen("test/test5.in","r",stdin);
    //freopen("test/test5.out","w",stdout);
    int n,x,y,a[6][6],t=0; 
	bool f; 
    for(int i=1;i<=5;++i)
    {
    	n=-10000;
		for(int j=1;j<=5;++j)
		{
			cin>>a[i][j];
			if (a[i][j]>n) 
			{
				n=a[i][j];
				a[i][0]=j;
			}
		}
	}
	
	for (int i=1;i<=5;++i)
		{
			f=true;
			for (int k=1;k<=5;++k)
			if (a[k][a[i][0]]<a[i][a[i][0]])  f=false;
			if (f) {cout<<i<<" "<<a[i][0]<<" "<<a[i][a[i][0]]<<endl;t=1;}
		}
	if (t==0) cout<<"not found";    
	//fclose(stdin);   
   	//fclose(stdout);	
	return 0;
}

