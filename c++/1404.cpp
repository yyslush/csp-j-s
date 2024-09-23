#include <iostream>
#include <cmath>
using namespace std;
int ans=0,a[160]={0},n,p;
int main() 
{
    bool f=true;
    cin>>n;
    p=1,a[1]=1;
    for (int i=1;i<=n;i++) 
	{
        int k=0;
        for (int j=1;j<=p;j++) {
            k=k+i*a[j];
            a[j]=k%10;
            k=k/10;
        } 
        while (k>0)
		{
            a[++p]=k%10;
            k=k/10;
        }
    }
    for (int i=1;i<=p;i++) ans=ans+a[i];
    for (int i=2;i<=int(sqrt(ans));i++) if (ans%i==0) f=false;
    cout<<ans;
    if (f==true) cout<<"T"; else cout<<"F";
    return 0;
}
