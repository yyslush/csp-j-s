#include<iostream>
#include<algorithm>
using namespace std;
int n,a[105],m=0,sum=0,len;
bool used[105];
bool cmp(int x,int y){
    return x>y;
}
void dfs(int k,int now){
    int last;
    if (k>n && now==0) {
        printf("%d\n",len);
        exit(0);
    };
    if (k>n) return ;
    last=0;
    for (int i=1; i<=n; i++)
      if(!used[i] && a[i]+now<=len && a[i]!=last){
          used[i]=1;
          if (a[i]+now==len) dfs(k+1,0);
          dfs(k+1,a[i]+now);
          used[i]=0;
          last=a[i];
          if (now==0) return;
      }
}

main(){
    scanf("%d",&n);
    for (int i=1; i<=n; i++) {
        scanf("%d",&a[i]);
        m=max(m,a[i]);
        sum+=a[i];
    }
    sort(a+1,a+n+1,cmp);
    for (int l=m; l<=sum; l++)
      if (sum%l==0) {
        len=l;dfs(1,0);
      }
    return 0;
}
