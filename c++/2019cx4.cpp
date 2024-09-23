#include <iostream>
using namespace std;

int n,m,count,Maxn;

int main(){
    cin>>n>>m;
    if(m%2==0||m>n)
        cout<<"0 0";
    else{
        long long t=1;
        while(t*2<m) t*=2;
        int k=1,i=t;
        while(k<m){
            ++i;k+=2;
        }
        ++count,Maxn=i;
        //cout<<count<<" "<<Maxn<<endl;
        while(t*2<=n){
            if(Maxn+t<=n)++count,Maxn+=t;
            t*=2;
            //cout<<count<<" "<<Maxn<<" "<<t<<endl;
        }
        cout<<count<<" "<<Maxn;
    }
    return 0;
}
