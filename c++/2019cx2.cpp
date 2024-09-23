#include <iostream>
#include <vector>
using namespace std;

int n,m,f[1000005];
vector<vector<int>> tab(1000005);

int  find(int x){
    if(x==f[x]) return x;
    return f[x]=find(f[x]);
}

int main(){
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;++i) f[i]=i;
    for(int i=1;i<=m;++i){
        int x,y;
        scanf("%d%d",&x,&y);
        int xx=find(x),yy=find(y);
        if(xx>yy) f[xx]=yy;else f[yy]=xx;
    }
    for(int i=1;i<=n;++i){
        if(f[i]!=find(i)) f[i]=find(i);
        tab[f[i]].push_back(i);
    }
    for(int i=1;i<=n;++i){
        int it=tab[i].size();
        for(int j=0;j<it/2;++j) {
            f[tab[i][j]]=tab[i][it-j-1];
            f[tab[i][it-j-1]]=tab[i][j];
        }
        if(it%2!=0) f[tab[i][it/2]]=tab[i][it/2];
    }
    for(int i=1;i<=n;++i) cout<<f[i]<<" ";
    return 0;
}
