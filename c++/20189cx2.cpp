#include <iostream>
#include <algorithm>
using namespace std;

struct date{
    int f,b;
} change[1000005];
int n,m,a[1000005];
bool cmp(date a,date c){
    return(a.b>c.b||(a.b==c.b&&a.f<c.f));
}

int main(){
    cin>>n>>m;
    for(int i=1;i<=n;++i) a[i]=i;
    for(int i=1;i<=m;++i)
        scanf("%d%d",&change[i].f,&change[i].b);
    sort(change+1,change+n+1,cmp);
    for(int i=1;i<=m;++i)
        if(a[change[i].b]>a[change[i].f]) {
            int t=a[change[i].b];
            a[change[i].b]=a[change[i].f];
            a[change[i].f]=t;
        }
    for(int i=1;i<=n;++i) printf("%d ",a[i]);
    return 0;
}
