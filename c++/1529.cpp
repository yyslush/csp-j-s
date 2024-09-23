#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int N=45,V=500,INF=1e7;
int n,k,f[V],ans=0,a[N],b[N];
void dfs(int now){
    for(int i=0;i<V;i++) f[i]=INF; f[0]=0;
    int mxi=0;
    for(mxi=1;;mxi++){
        for(int i=1;i<now&&a[i]<=mxi;i++) f[mxi]=min(f[mxi],f[mxi-a[i]]+1);
        if(f[mxi]>n) break;
    }
    mxi--;
    if(mxi>ans){
        ans=mxi;
        for(int i=1;i<=n;i++) b[i]=a[i];
    }
    if(now==k+1) return;
    for(int i=a[now-1]+1;i<=mxi+1;i++){
        a[now]=i;
        dfs(now+1);
    }
}
int main(){
    cin>>n>>k;
    a[1]=1;
    dfs(2);
    for(int i=1;i<=k;i++) cout<<b[i]<<" ";
    cout<<"\n";
    cout<<"MAX="<<ans;
}
