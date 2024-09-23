#include <iostream>
using namespace std;
int n,m,mingt=1000000005,maxgt,minct=1000000005,maxct;
int main(){
    int t1,t2;
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>t1>>t2;
        if(mingt>t2) mingt=t2;
        if(maxgt<t1) maxgt=t1;
    }
    cin>>m;
    for(int i=1;i<=m;++i){
        cin>>t1>>t2;
        if(minct>t2) minct=t2;
        if(maxct<t1) maxct=t1;
    }
    if(maxgt-minct>maxct-mingt) cout<<maxgt-minct; else cout<<maxct-mingt;
    return 0;
}
