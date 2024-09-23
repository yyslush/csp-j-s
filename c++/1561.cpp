#include <iostream>
#include <cmath>
using namespace std;
struct date{
    int p,x,y;
}a[405];
int n,m,k,ans=0;

int main(){
    cin>>n>>m>>k;
    int t=0;
    for(int i=1;i<=n;++i)
        for(int j=1;j<=m;++j){
            int tt;
            cin>>tt;
            if(tt) a[++t].p=tt,a[t].x=i,a[t].y=j;
        }
    for(int i=1;i<=t-1;++i)
        for(int j=i+1;j<=t;++j)
          if(a[i].p<a[j].p) swap(a[i],a[j]);
    a[0].x=0;a[0].y=a[1].y;
    int q=1;
    while(k-(1+abs(a[q].x-a[q-1].x)+abs(a[q].y-a[q-1].y)+a[q].x)>=0 && q<=t){
        ans+=a[q].p;
        k-=(1+abs(a[q].x-a[q-1].x)+abs(a[q].y-a[q-1].y));
        //cout<<k<<" "<<q<<" "<<a[q].x<<" "<<a[q].y<<" "<<ans<<endl;
        ++q;
    }
    cout<<ans;
    return 0;
}
