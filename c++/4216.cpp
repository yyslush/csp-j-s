#include <iostream>
using namespace std;
double a[4],f,s,t,e;
int ans;
int main(){
    cin>>a[0]>>a[1]>>a[2]>>a[3]>>e;
    for(int i=1;i<=4;++i){
        switch (i){
            case 1:f=a[0]+a[1];break;
            case 2:f=a[0]-a[1];break;
            case 3:f=a[0]*a[1];break;
            case 4:f=a[0]/a[1];break;
        }
        for(int j=1;j<=4;++j){
            switch (j){
                case 1:s=f+a[2];break;
                case 2:s=f-a[2];break;
                case 3:s=f*a[2];break;
                case 4:s=f/a[2];break;
            }
            for(int k=1;k<=4;++k){
                switch (k){
                    case 1:t=s+a[3];
                           if(t==e) {
                               ++ans;
                               //cout<<i<<" "<<j<<" "<<k<<endl;
                           };break;
                    case 2:t=s-a[3];
                           if(t==e) {
                               ++ans;
                               //cout<<i<<" "<<j<<" "<<k<<endl;
                           };break;
                    case 3:t=s*a[3];
                           if(t==e) {
                               ++ans;
                               //cout<<i<<" "<<j<<" "<<k<<endl;
                           };break;
                    case 4:t=s/a[3];
                           if(t==e) {
                               ++ans;
                               //cout<<i<<" "<<j<<" "<<k<<endl;
                           };break;
                }
            }
        }
    }
    cout<<ans;
    return 0;
}
