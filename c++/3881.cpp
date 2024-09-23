#include <iostream>
#include <cstring>
using namespace std;

int n,m,map[105][105],f[105][105];
const int dxy[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
bool flag;

void  dfs(int x,int y,bool &magic){
    if(x==m&&y==m) return;
    for(int i=0;i<4;++i){
        int dx=x+dxy[i][0],dy=y+dxy[i][1];
        cout<<x<<" "<<y<<" "<<dx<<" "<<dy<<" "<<endl;
        if(dx>=1&&dx<=m&&dy>=1&&dy<=m)
            if(map[x][y]!=0&&map[dx][dy]!=0) {
                if(map[dx][dy]==map[x][y]&&f[dx][dy]>f[x][y]) f[dx][dy]=f[x][y];
                if(map[dx][dy]!=map[x][y]&&f[dx][dy]>f[x][y]+1) f[dx][dy]=f[x][y];
                dfs(dx,dy,0);
            }
            else if(map[dx][dy]==0&magic==0){
                if(f[dx][dy]>f[x][y]+2) map[dx][dy]=map[x][y],f[dx][dy]=f[x][y]+2,dfs(dx,dy,1);
                map[dx][dy]=0;
            }
    }
}

int main(){
    memset(f,0x3f3f3f3f,sizeof(f));
    ios::sync_with_stdio(false);
    cin>>m>>n;
    for(int i=1;i<=n;++i){
        int x,y,c;
        cin>>x>>y>>c;
        map[x][y]=c;
        if(c==0) map[x][y]=2;
    }
    for(int i=1;i<=m;++i){
        for(int j=1;j<=m;++j) cout<<map[i][j]<<" "; cout<<endl;
    }
    cout<<dfs(1,1,0,flag);
    cout<<f[m][m];
    return 0;
}
