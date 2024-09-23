#include <iostream>
using namespace std;
int ans=0;

int main(){
  int a,b,m=0;
  for(int i=1;i<=7;++i){
    cin>>a>>b;
    if(a+b>m) m=a+b,ans=i;
  }
  cout<<ans;
  return 0;
}
