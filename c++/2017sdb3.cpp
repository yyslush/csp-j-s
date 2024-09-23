#include<cmath>
#include<cstring>
#include<iostream>
using namespace std;
long long a,b,l;
int su();
int sl[664581];
bool s[9998275];
int main()
{
	int n,k,p;
	bool f;
	//freopen("sd/spell10.in","r",stdin);
    //freopen("sd/spell.out","w",stdout);
	cin>>n;
	su();
    for (int i=1;i<=n;++i)
    {   	
		cin>>a>>b;	
	   	for (int j=1;j<=l;++j)
    	{
    		f=true;
			if(b%sl[j]==0)
			{   
			    if(a%sl[j]==0) f=true;
					else {f=false;break;}  		
			}
				  
		}  	   	
		if (f) cout<<"Yes"<<endl;else cout<<"No"<<endl;
	}
	//fclose(stdin);   
   	//fclose(stdout);
	return 0;
}
int su()
{
	memset(s,1,sizeof(s));
	for (int i=2;i<=int(sqrt(9998275));++i)
		if (s[i])
		for (int j=2;j<=9998275/i;++j) s[i*j]=false;
	int k=0;
	for(int i=2;i<=9998275;++i)
		if (s[i])
		{
			++k;
			sl[k]=i;
		}
	l=k;
}
