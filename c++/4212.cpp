#include <iostream>
#include <string>
using namespace std;
int n,m,sx,sy,ans,path[8],step[5][2]={{0,1},{1,0},{0,-1},{-1,0}};
char map[70][70];
string s;

void init() {
    cin>>n>>m;
    //getchar();
    for(int i=1;i<=n;++i){
        for(int j=1;j<=m;++j) {
            //scanf("%c", &map[i][j]);
            cin>>map[i][j];
            if(map[i][j]=='S') sx=i,sy=j;
        }
        //getchar();
    }
    cin>>s;
}
void doit(){
    for(int a=0;a<4;++a)
        for(int b=0;b<4;++b)
            for(int c=0;c<4;++c)
                for(int d=0;d<4;++d)
                    if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d){
                        int x=sx,y=sy;
                        path[0]=a;path[1]=b;path[2]=c;path[3]=d;
                        //cout<<path[0]<<path[1]<<path[2]<<path[3]<<" "<<x<<" "<<y<<endl;
                        for(int i=0;i<s.length();++i){
                            //cout<<i<<" "<<s[i]<<endl<<" "<<s[i]-48<<" "<<step[path[s[i]-48]][0]<<" "<<step[path[s[i]-48]][1]<<" ";
                            x+=step[path[s[i]-48]][0],y+=step[path[s[i]-48]][1];
                            //cout<<x<<" "<<y<<endl;
                            if(x<1||x>n||y<1||y>m||map[x][y]=='#') break;
                            if(map[x][y]!='#') {
                                if(map[x][y]=='E') {
                                    ++ans;
                                    //cout<<"E"<<ans<<endl;
                                    break;
                                }
                            }
                        }
                    }
}
int main(){
    //freopen("robot1.in","r",stdin);
    init();
    doit();
    cout<<ans;
    return 0;
}
