/*
线段树，维护区间的最小值 
*/

#include<iostream>
#include<cstdio>
using namespace std;
int n,m,tot=0,ans=0;
const int maxn=1000010; 
int cnt,st,en; //订单 
int d[maxn]; //d[i] 第i天能提供的教室个数 
struct treety{ //维护区间的最小值 
    int Left,Right;
    int lptr,rptr;
    int bj,dat;
}t[maxn*2];
int min(int a,int b)
{
    if (a>b) return b; else return a;
}
void buildtree(int ll,int rr)
{
    int cur=++tot;
    t[cur].Left=ll; t[cur].Right=rr;
    if (ll!=rr-1)
    {
        t[cur].lptr=tot+1; buildtree(ll,(ll+rr)/2);
        t[cur].rptr=tot+1; buildtree((ll+rr)/2,rr);
        t[cur].dat=min(t[t[cur].lptr].dat,t[t[cur].rptr].dat);
    }else t[cur].dat=d[ll];
}

void update(int k)
{
    t[t[k].lptr].dat-=t[k].bj;    t[t[k].rptr].dat-=t[k].bj;
    t[t[k].lptr].bj+=t[k].bj;    t[t[k].rptr].bj+=t[k].bj;
    t[k].bj=0;
}

void change(int k,int ll,int rr,int delta)
{
    if (ll<=t[k].Left && rr>=t[k].Right)
    {
        t[k].dat-=delta;
        t[k].bj+=delta;
        if (t[k].dat<0) {
            ans=1;
            return ;
        } //更改完成后判断 
    }

        else
        {
            if (t[k].bj) update (k);
            if (ll<(t[k].Left+t[k].Right)/2) change(t[k].lptr,ll,rr,delta);
            if (rr>(t[k].Left+t[k].Right)/2) change(t[k].rptr,ll,rr,delta);
            t[k].dat=min(t[t[k].lptr].dat,t[t[k].rptr].dat);
        }
}

int main()
{
    scanf("%d%d",&n,&m);
    for (int i=1;i<=n;i++) scanf("%d",&d[i]);
    buildtree(1,n+1);
    for (int i=1;i<=m;i++)
    {
        scanf("%d%d%d",&cnt,&st,&en);
        change(1,st,en+1,cnt);
        if (ans) {
            printf("-1\n%d",i); break;
        }
    }
    if (ans==0) printf("0\n");
    return 0;
}
