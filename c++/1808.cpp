#include<cstdio>
#include<queue>
#include<algorithm>
using namespace std;
struct node{
    int x,y;
}n;
queue<node>que;
int vis[25][25],M[3],tmp;
void bfs(){//定义广搜函数
    while(!que.empty()){//一直循环，直到队列为空
        for(int i=0;i<=2;i++)
            for(int j=0;j<=2;j++){
                int A[3];
                A[0]=que.front().x;
                A[1]=que.front().y;//读入队列首项
                A[2]=M[2]-A[0]-A[1];
                if(i==j) continue;
                tmp=A[i]+A[j];//定义一个暂时变量用于后面查看
                A[j]=min(tmp,M[j]);//取小的
                A[i]=tmp-A[j];
                if(!vis[A[0]][A[1]]){
                    vis[A[0]][A[1]]=1;//已经访问过，避免再次访问
                    n.x=A[0];
                    n.y=A[1];//把值赋值为临时n，到后面来入队
                    que.push(n); //入队
                }
            }
        que.pop();//出栈
    }
}
int main()
{
    //freopen("cow.in","r",stdin);
    //freopen("cow.out","w",stdout);//文件的输入输出
    scanf("%d%d%d",&M[0],&M[1],&M[2]);//读入
    vis[0][0]=1;
    n.x=0;
    n.y=0;//初始化
    que.push(n);//入队
    bfs();
    int c=0;
    for(int i=M[2];i>=0;i--)//输出
        if(vis[0][i]==1){
            if(c==1) printf(" ");
            c=1;
            printf("%d",M[2]-i);
        }
}
