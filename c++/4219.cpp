#include <iostream>
#include <cstring>
#include <queue>
using namespace std;
struct mystr{
    int x,y;
} st,ta;
int n,m,k,h,blood[27],maxb=-1,re[105][105],step[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
char map[105][105];
queue<mystr> myq;

void init(){
    cin>>n>>m>>k>>h>>st.x>>st.y>>ta.x>>ta.y;
    for(int i=1;i<=n;++i)
        for(int j=1;j<=m;++j) cin>>map[i][j];
    for(int i=1;i<=k;++i) cin>>blood[i];
    re[st.x][st.y]=h;
}

int main(){
    init();    
    myq.push(st);
    while(!myq.empty()){
        for(int i=0;i<4;++i){
            int xx=myq.front().x+step[i][0],yy=myq.front().y+step[i][1],t=re[myq.front().x][myq.front().y];
            if(xx>=1&&xx<=n&&yy>=1&&yy<=m&&map[xx][yy]!='#'){
                mystr tt;
                tt.x=xx;tt.y=yy;
                if(map[xx][yy]>='A'&&map[xx][yy]<='Z')
                    t-=blood[map[xx][yy]-64];
                //cout<<myq.front().x<<" "<<myq.front().y<<" "<<i<<" "<<xx<<" "<<yy<<" "<<re[xx][yy]<<endl;
                if(t>re[xx][yy]) myq.push(tt),re[xx][yy]=t;
                if(xx==ta.x&&yy==ta.y&&re[xx][yy]>maxb) maxb=re[xx][yy];
            }
        }
        myq.pop();
    }
    cout<<maxb;    
    return 0;
}
