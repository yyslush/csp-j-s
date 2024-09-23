#include <iomanip>
#include<iostream>
using namespace std;
int a[1001];
int main() {
    int n,x,y=0;
    double ans=0;
    cin>>n;
    for (int i=1;i<=n;i++) {
        cin>>x;
        if (x>=1 && x<=100) {
            y++;
            a[y]=x;
            ans+=x;
        }
    }
    for (int i=1;i<y;i++) 
        for (int j=y;j>i;j--) if (a[j]>a[j-1]) swap(a[j],a[j-1]);
    cout<<fixed<<setprecision(2)<<ans/y<<endl;
    x=int(y*0.1+0.5);   
    for (int i=1;i<=x;i++) ans-=a[i]+a[y-i+1];
	cout<<y<<" "<<x<<" "<<ans<<endl;
    cout<<fixed<<setprecision(2)<<ans/(y-2*x)<<endl;
    return 0;
}
