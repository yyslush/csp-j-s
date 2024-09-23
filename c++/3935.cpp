#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
int t,t1,t2,m;
bool f[1000005];
long long h,a,x,y;
int doit(){
  int tt=0;
  memset(f,0,sizeof(f));
  while(f[(h*x+y)% m]==0&&h!=a){
    ++tt;
    h=(h*x+y) % m;
    f[h]=1;
    cout<<h<<" ";
  }
  cout<<endl;
  if(h==a) return tt;else return -1;
}

int main(){
  cin>>t;
  for(int i=1;i<=t;++i){
    cin>>m>>h>>a>>x>>y;
    t1=doit();
    cin>>h>>a>>x>>y;
    t2=doit();
    if(t1==-1||t2==-1) cout<<-1<<endl;else cout<<max(t1,t2)<<endl;
  }
  return 0;
}
