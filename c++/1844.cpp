#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
double dl[105]={0},mc[105]={0},maxll=0;
int n,t;
  
int main()
{
    cin>>n;   
    dl[0]=100,mc[0]=0;
    for(int i=1;i<=n;++i)
	{
		cin>>t;
		if(mc[i]<dl[i-1]*1.0*t/100) mc[i]=dl[i-1]*1.0*t/100,dl[i]=dl[i-1];else mc[i]=mc[i-1];
		//printf("%0.2lf %0.2lf %0.2lf\n",dl[i],mc[i],maxll); 
		if(dl[i]<mc[i-1]*1.0/t*100) dl[i]=mc[i-1]*1.0/t*100,mc[i]=mc[i-1];else dl[i]=dl[i-1];
		//printf("%0.2lf %0.2lf %0.2lf\n",dl[i],mc[i],maxll); 
		if(maxll<dl[i]) maxll=dl[i];		
		//printf("%0.2lf %0.2lf %0.2lf\n",dl[i],mc[i],maxll); 
		
	}	 
    printf("%0.2lf",maxll); 
    return 0;
}
