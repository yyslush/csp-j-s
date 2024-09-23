#include<iostream>
#include<string>
#include<cmath>
using namespace std;
bool su(int);
int main ()
{
   	int x,y,ans=0;    
    cin>>x>>y;
	if(x==1) x=2;	
	for(int i=x;i<=y;++i)
		if(su(i)) ++ans;
	cout<<ans;		
    return 0;
}
bool su(int n)
{
    for (int j=2;j<=(int(sqrt(n)));++j)
        if (n%j==0) return false;
    return true;            
}
