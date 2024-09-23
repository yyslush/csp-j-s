#include <iostream>
#include <cmath>
using namespace std;
int n,m[205],f[205],mm=0,mf=0,mms=0,mfs=0,mp,fp;
int main(){
    cin>>n;
    for(int i=1;i<=2*n;++i){
        int h,x;
        cin>>x>>h;
        if(x==0) f[h]++;else m[h]++;
        if(mm<m[h]) mm=m[h],mp=h;
        if(mf<f[h]) mf=f[h],fp=h;
    }
    //cout<<mm<<" "<<mf<<" "<<mp<<" "<<fp<<endl;
    if(fp!=mp)
        cout<<n*2-mm-mf<<endl;
    else{
        for(int i=120;i<=200;++i){
            if(mms<m[i]&&m[i]<=mm&&mp!=i) mms=m[i];
            if(mfs<f[i]&&f[i]<=mf&&fp!=i) mfs=f[i];
        }
        //cout<<mm+mfs<<" "<<mms+mf<<endl;
        cout<<n*2-max(mm+mfs,mms+mf)<<endl;
    }
    return 0;
}
