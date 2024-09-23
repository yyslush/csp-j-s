#include <iostream>
#include <algorithm>
using namespace std;
struct date
{
  int coor_d;
  bool on_off;
} a[200005];
int n,ans=0;

bool cmp(date x,date y)
{
  return (x.coor_d<y.coor_d||(x.coor_d==y.coor_d&&x.on_off>y.on_off));
}

int main()
{
  cin>>n;
  int p=0;
  for(int i=1;i<=n;++i)
  {
    int s,e;
    scanf("%d%d",&s,&e);
    a[++p].coor_d=s,a[p].on_off=1;
    a[++p].coor_d=e,a[p].on_off=0;
  }
  sort(a+1,a+p+1,cmp);
  //for(int i=1;i<=p;++i) cout<<a[i].coor_d<<" "<<a[i].on_off<<endl;
  int s=0;
  for(int i=1;i<=p;++i)
  {
    if(a[i].on_off) ++s;else --s;
    if(s>ans) ans=s;
  }
  cout<<ans;
  return 0;
}
