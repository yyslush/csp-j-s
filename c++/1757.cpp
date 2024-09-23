#include <iostream>
#include <algorithm>
using namespace std;

struct group{
  int l,w;
}a[1005];
int n,cnt=0;
bool sign[1005];

bool cmp(group a,group b){
  return (a.l<b.l|| a.l==b.l && a.w<=b.w);
}

int main(){
  cin>>n;
  for(int i=1;i<=n;++i) scanf("%d%d",&a[i].l,&a[i].w);
  sort(a+1,a+n+1,cmp);
  for(int i=1;i<=n;++i)
    if(!sign[i]){
      ++cnt;sign[i]=true;
      //cout<<i<<" "<<cnt<<endl;
      int p=i;
      for(int j=p+1;j<=n;++j)
        if(a[j].w>=a[p].w&&!sign[j]) sign[j]=true,p=j;
      //for(int j=1;j<=n;++j) cout<<sign[j]<<" ";cout<<endl;
  }
  cout<<cnt;
  return 0;
}
