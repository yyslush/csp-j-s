#include <iostream>
#include <algorithm> 
using namespace std;
long long s[1005];                     
int hh[2118931];

int main()
{
  
    long long a,b,c,d,p,n,x,ans=0;
    cin>>a>>b>>c>>d>>p>>n;
    for (int i=1; i<=n; i++) cin>>s[i];    
     
    for (int i=1; i<=n; i++)
    for (int j=1; j<=n; j++)
    {
        x=(p-(a*s[i]+b*s[j]));
		if (x<0) x=abs(x)+10000000;
        hh[x%2118931]++;
    }
    for (int i=1; i<=n; i++)
    for (int j=1; j<=n; j++)
    {
		x=(c*s[i]+d*s[j]); 
		if (x<0) x=abs(x)+10000000;
        ans=ans+hh[x%2118931];
    }   
    cout<<ans<<endl;
    return 0;

}
