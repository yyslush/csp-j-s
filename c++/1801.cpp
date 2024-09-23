#include<iostream>
#include<cstring>
using namespace std;
 
int r,c,ans=0,dx[4]={0,0,1,-1},dy[4]={1,-1,0,0};
char a[25][25];
bool t[100]={false};
 
int search(int x,int y,int k)
{ int i,xx,yy;
  if(k>ans) ans=k;
  for(i=0;i<4;i++)
  {
        xx=x+dx[i];
        yy=y+dy[i];
        if(xx>=1&&xx<=r&&yy>=1&&yy<=c&&!(t[a[xx][yy]]))
		{
	        t[a[xx][yy]]=true;
	        search(xx,yy,k+1);
	        t[a[xx][yy]]=false;
  		}          
  } 
}
int main(){
    int i,j;
    cin>>r>>c;
    for(i=1;i<=r;i++)
      for(j=1;j<=c;j++)
        cin>>a[i][j];
    //memset(t,true,sizeof(t));
    //for(int i=65;i<=90;++i) cout<<t[i];cout<<endl;
    t[a[1][1]]=true;
    //cout<<t[a[1][1]]<<endl;
    search(1,1,1);
    cout<<ans<<endl;
}
