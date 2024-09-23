#include <iostream>
#include <cmath>
using namespace std;

int a[100005],n,ans=0x7fffffff;

int main(){
    std::ios::sync_with_stdio(false);
    cin>>n;
    for(int i=1;i<=n;++i){
        int x;
        cin>>x;
        a[i]=a[i-1]+x;
    }
    for(int i=1;i<=n;++i)
        ans=min(ans,abs(a[i]-a[n]+a[i]));    
    cout<<ans;
    return 0;
}
