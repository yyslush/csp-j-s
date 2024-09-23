#include <iostream>
using namespace std;

int n,tr[50005],q;

int main(){
  cin>>n;
  for(int i=1;i<=n;++i) scanf("%d",&tr[i]);
  int p=1;
  while(p<=n){
    while(tr[p]<tr[p+1]) ++p;
    q=p;
    while(tr[p]>tr[p+1]) ++p;
    printf("%d\n",q);
    ++p;
  }
  return 0;
}
