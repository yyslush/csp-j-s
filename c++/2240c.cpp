#include <iostream>
using namespace std;

int f[105],n,k,ans;

int getf(int a){
    if(f[a]==a)
        return a;
    else{
        f[a]=getf(f[a]);
        return f[a];
    }
}

int main(){
    cin>>n>>k;
    for(int i=1;i<=n;++i) f[i]=i;
    for(int i=1;i<=k;++i){
        int a,b;
        cin>>a>>b;
        a=getf(a);
        b=getf(b);
        //for(int j=1;j<=n;++j) cout<<f[j]<<" ";cout<<endl;
        if(a!=b) f[b]=a;
        //for(int j=1;j<=n;++j) cout<<f[j]<<" ";cout<<endl<<endl;
    }
    for(int i=1;i<=n;++i)
        if(f[i]==i) ++ans;
    cout<<ans;
    return 0;
}
