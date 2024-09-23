#include <iostream>
#include <cmath>
using namespace std;

int n,ans,a[7][7],sou[4][25],tar[4][80];
bool f=true;

bool check(int i){
    for(int j=1;j<=sou[i][0];++j){
        int k=1;
        while(k<=sou[i][0]&&sou[i][k]==tar[i][j+k-1]) ++k;
        if(k>sou[i][0]) {
            if(j<=sou[i][0]/2+1) ans+=j-1; else ans+=sou[i][0]-j+1;
            return true;
        }
    }
    return false;
}

void makes(int n){
    for(int i=1;i<=(n+1)/2;++i){
        for(int j=i;j<=n-i+1;++j) sou[i][++sou[i][0]]=a[i][j];
        for(int j=i+1;j<=n-i+1;++j) sou[i][++sou[i][0]]=a[j][n-i+1];
        for(int j=n-i;j>=i;--j) sou[i][++sou[i][0]]=a[n-i+1][j];
        for(int j=n-i;j>=i+1;--j) sou[i][++sou[i][0]]=a[j][i];
    }
}
void maket(int n){
    for(int i=1;i<=(n+1)/2;++i){
        for(int j=i;j<=n-i+1;++j) tar[i][++tar[i][0]]=a[i][j];
        for(int j=i+1;j<=n-i+1;++j) tar[i][++tar[i][0]]=a[j][n-i+1];
        for(int j=n-i;j>=i;--j) tar[i][++tar[i][0]]=a[n-i+1][j];
        for(int j=n-i;j>=i+1;--j) tar[i][++tar[i][0]]=a[j][i];
        for(int j=1;j<=tar[i][0];++j) tar[i][tar[i][0]+j]=tar[i][j];
        tar[i][0]*=2;
    }
}

int main(){
    int t=0;
    cin>>n;
    for(int i=1;i<=n;++i)
        for(int j=1;j<=n;++j) a[i][j]=++t;
    makes(n);
    for(int i=1;i<=n;++i)
        for(int j=1;j<=n;++j) cin>>a[i][j];
    maket(n);
    // for(int i=1;i<=sou[1][0];++i) cout<<sou[1][i];cout<<endl;
    // for(int i=1;i<=sou[2][0];++i) cout<<sou[2][i];cout<<endl;
    // for(int i=1;i<=sou[3][0];++i) cout<<sou[3][i];cout<<endl;
    for(int i=1;i<=(n+1)/2;++i)
        if(check(i)==false){
            f=false;
            break;
        }
    if(f) cout<<"YES"<<endl<<ans; else cout<<"NO";
    return 0;
}
