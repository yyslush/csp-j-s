#include <iostream>
#include <algorithm>
using namespace std;

 struct point{
  int va,ma;
  double pr;
}a[1005];
int n,m;
double ans=0;

bool cmp(point a,point b){
  return a.pr>b.pr;
}

int main(){
  cin>>m>>n;
  for(int i=1;i<=n;++i){
    scanf("%d%d",&a[i].va,&a[i].ma);
    a[i].pr=a[i].va*1.0/a[i].ma;
  }
  sort(a+1,a+n+1,cmp);
  int p=0;
  while(m>0){
    ++p;
    if(m>=a[p].ma) ans+=a[p].va,m-=a[p].ma;
    else ans+=a[p].pr*m,m=0;
  }
  printf("%0.1lf",ans );
  return 0;
}
