#include<iostream>
#include<cmath>
using namespace std;
bool pan(int,int);
int main ()
{
   // freopen("test/test5.in","r",stdin);
    //freopen("test/test5.out","w",stdout);
    float a;
    int b,n,k=0; 
    string s;
	cin>>n;     
    for(int i=1;i<=n;++i)  
	{
		cin>>s>>a>>b;
		if(pan(int(a*10),b)==true) 
		{
			++k;
			cout<<s<<endl;
		}
		
	} 
	cout<<k;		
    //fclose(stdin);   
    //fclose(stdout);    
    return 0;
}
bool pan(int a,int b)
{
	if (a>=375&&b==1)  return true;else return false;			
}
