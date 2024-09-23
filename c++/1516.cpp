#include<bits/stdc++.h>
using namespace std;
int pan[11][11];
bool can[101];
int mubiao[11][11];
int check(int n){
 for(int i=2;i*i<=n;i++){
  if(n%i==0)return 0;
 }
 return 1;
}
int n;int ans=0x7fffffff;
int flag=0;
int calc(){
 int ansss=0;
 for(int i=1;i<=n;i++){
  ans+=pan[i][1]+pan[1][i];
 }
 return ansss;
}
void dfs(int x,int y){
 if(y>=n+1){
  flag=1;
  int tx=calc();
  if(ans>tx){
  memcpy(mubiao,pan,sizeof(pan));
  ans=tx;
  }
  
  return ;
  }
 
 if(x>=n+1){
 dfs(1,y+1);
 return ; 
 }
 for(int i=2;i<=n*n;i++){
  if(can[i]==0){
        if(x>1&&y==1&&!check(i+pan[x-1][y]))continue;
        else if(x==1&&y>1&&!check(i+pan[x][y-1]))continue;
        else if(!check(i+pan[x-1][y])&&!check(i+pan[x][y-1]))continue;
        can[i]=1;
        pan[x][y]=i;
        dfs(x+1,y);
        can[i]=0;
 }
 }
 return ;
}
int main(){
 cin>>n;
 if(n==1){
 cout<<"NO"; return 0;
 }
 can[1]=1;
 pan[1][1]=1;
 dfs(2,1);
 if(!flag)cout<<"NO";
 else {
  for(int i=1;i<=n;i++){
   for(int j=1;j<=n;j++){
    cout<<pan[i][j]<<" ";
   }
   cout<<endl;
  }
 }
 return 0;
}
