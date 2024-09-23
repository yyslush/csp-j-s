#include<cstdio>
#include<iostream>
#include<algorithm>
#define inf 0x7fffffff;
using namespace std;
int m,mod,last,cnt;
struct data{int l,r,mx;}t[800005];
void build(int k,int l,int r){
    t[k].l=l;t[k].r=r;t[k].mx=-inf;
    if(l==r)return;
    int mid=(l+r)>>1;
    build(k<<1,l,mid);
    build(k<<1|1,mid+1,r);
}
int ask(int k,int x,int y){
    int l=t[k].l,r=t[k].r;
    if(l==x&&r==y)return t[k].mx;
    int mid=(l+r)>>1;
    if(y<=mid)return ask(k<<1,x,y);
    else if(x>mid)return ask(k<<1|1,x,y);
    else return max(ask(k<<1,x,mid),ask(k<<1|1,mid+1,y));
}
void insert(int k,int x,int y)
{
    int l=t[k].l,r=t[k].r;
    if(l==r){t[k].mx=y;return;}
    int mid=(l+r)>>1;
    if(x<=mid)insert(k<<1,x,y);
    else insert(k<<1|1,x,y);
    t[k].mx=max(t[k<<1].mx,t[k<<1|1].mx);
}
int main()
{
    scanf("%d%d",&m,&mod);
    build(1,1,m);
    for(int i=1;i<=m;i++)    {
        char ch[5];
        scanf("%s",ch);
        getchar();
        int x;
        if(ch[0]=='A')     {
            cnt++;
            scanf("%d",&x);x=(x+last)%mod;
            insert(1,cnt,x);
        }
        else        {
            scanf("%d",&x);
          last=ask(1,cnt-x+1,cnt);
          printf("%d\n",last);
        }
    }
    return 0;
}
