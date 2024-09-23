#include<iostream>
#include<cstdio>
#include<cstring>
#include<queue>
using namespace std;
int bx,by,n;
int gx[4]={0,0,1,-1},gy[4]={1,-1,0,0};
bool mp[1005][1005];
struct man{int x,y,step;} ;
queue<man> q;
void bfs()
{
	man tt;
	tt.x=bx;tt.y=by;tt.step=0;	
	q.push(tt);	
    mp[bx][by]=1;
	while(!q.empty())	{
		
		for(int i=0;i<4;i++)
	    {
	    	tt=q.front();
			int nowx=tt.x+gx[i],nowy=tt.y+gy[i];
	    	if(!mp[nowx][nowy]&&nowx>=0&&nowy>=0&&nowx<=1000&&nowy<=1000)
	    	{
	    		//cout<<tt.step<<" "<<tt.x<<" "<<tt.y<<endl;
				tt.x=nowx;tt.y=nowy;tt.step+=1;
	    		q.push(tt);	    		
	    		mp[nowx][nowy]=1;
			}
	    	if(nowx==500&&nowy==500){cout<<tt.step;return;}    
	    }
	    q.pop();
    }  
}
int main()
{
	//freopen("test/mud.10.in","r",stdin);
	cin>>bx>>by>>n;	
	bx+=500;by+=500;
	for(int i=1;i<=n;i++)
    {
    	int x,y;
    	cin>>x>>y;
    	mp[x+500][y+500]=1;
    } 
	bfs();   
    //fclose(stdin);
	return 0;
}
 
