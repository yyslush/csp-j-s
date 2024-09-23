#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int n;
struct date1{int x1,t;}a[1000005];
struct date2{int x2,m;}q[1000005];
bool cmp(date1 a,date1 b){
    return (a.x1+a.t<b.x1+b.t||a.x1+a.t==b.x1+a.t&&a.x1<b.x1);
    //return (a.x1<b.x1||a.x1==b.x1&&a.t<b.t);
}

int main(){
    cin>>n>>q[0].m;
    for(int i=1;i<=n;++i) scanf("%d%d",&a[i].x1,&a[i].t);
    sort(a+1,a+n+1,cmp);
    //for(int i=1;i<=n;++i) cout<<a[i].x1<<"  ";cout<<endl;
    int tail=0,pa=1;
    while(pa<=n){
        int pointer=tail;
        while(pointer>0){
            int tt=q[pointer-1].m-abs(a[pa].x1-q[pointer-1].x2)-a[pa].t;
            if(tt>q[pointer].m) --pointer;else break;
        }
        if(pointer<tail){
            q[pointer+1].m=q[pointer].m-abs(a[pa].x1-q[pointer].x2)-a[pa].t;
            q[pointer+1].x2=a[pa].x1;
        }
        else if(q[pointer].m-abs(a[pa].x1-q[pointer].x2)-a[pa].t>=0){
            q[++tail].m=q[pointer].m-abs(a[pa].x1-q[pointer].x2)-a[pa].t;
            q[tail].x2=a[pa].x1;
        }
        //cout<<pa<<endl;
        ++pa;
        //for(int i=0;i<=tail;++i) printf("%5d ",q[i].x2);cout<<endl;
        //for(int i=0;i<=tail;++i) printf("%5d ",q[i].m);cout<<endl;
    }
    cout<<tail;
    return 0;
}
