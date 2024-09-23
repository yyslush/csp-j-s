#include <iostream>
#include <cstring>
#include <queue>
using namespace std;
int map[9][9],b,stx,sty,edx,edy,k;
int dx[8]={-1,-2,-2,-1,1,2,2,1},dy[8]={-2,-1,1,2,2,1,-1,-2};
struct date{
    int x1,y1;
};
queue<date>qu;

void init(){
    int t;
    char ch;
    for(int i=1;i<=b;++i){
        cin>>ch>>t;
        map[t][ch-96]=-1;
    }
    cin>>ch>>t;
    sty=ch-96;stx=t;
    cin>>ch>>t;
    edy=ch-96;edx=t;
}
int main(){
    while(cin>>b&&b!=-1){
        ++k;
        memset(map,127,sizeof(map));
        init();
        date t;
        t.x1=stx,t.y1=sty;
        map[stx][sty]=0;
        qu.push(t);
        while(!qu.empty()){
            for(int i=0;i<8;++i){
                t=qu.front();
                t.x1+=dx[i];t.y1+=dy[i];
                if(t.x1>=1&&t.x1<=8&&t.y1>=1&&t.y1<=8&&map[qu.front().x1][qu.front().y1]+1<map[t.x1][t.y1]){
                    map[t.x1][t.y1]=map[qu.front().x1][qu.front().y1]+1;
                    qu.push(t);
                }
            }
            qu.pop();
        }
        // for(int i=1;i<=8;++i){
        //     for(int j=1;j<=8;++j) printf("%12d",map[i][j]);
        //     cout<<endl;
        // }
        if(map[edx][edy]<0x7F7F7F7F)
            cout<<"Board "<<k<<": "<<map[edx][edy]<<" moves"<<endl;
        else
            cout<<"Board "<<k<<": not reachable"<<endl;
    }
    return 0;
}
