#include <iostream>
#include <string>
using namespace std;
string s,subs;
int n,a[1000];
int main(){
    cin>>s;cin>>n;
    int p=1000;
    for(int i=1;i<=n;++i){
        cin>>subs;
        int q=-1;
        while((q=s.find(subs,q+1))!=string::npos) {
        	if(a[q]<subs.length()-1) a[q]=subs.length()-1;
            if(q<p) p=q;
        }
    }
    //for(int i=0;i<=30;++i) cout<<i<<" "<<a[i]<<endl;
    for(int i=p+1;i<1000;++i)
        if(a[i]){
            if(p+a[p]>=i&&p+a[p]<a[i]+i) a[p]+=a[i]-(a[p]+p-i),a[i]=0;
            else if(p+a[p]<i) p=i;
            else if(p+a[p]>=a[i]+i) a[i]=0;
            //cout<<p<<" "<<a[p]<<" "<<i<<" "<<a[i]<<endl;
        }
    for(int i=999;i>=0;--i)
        if(a[i])
            for(int j=a[i]+i;j>i;--j) s.insert(j,"*");
    cout<<s;
    return 0;
}
