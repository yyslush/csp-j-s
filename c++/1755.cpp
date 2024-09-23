#include <iostream>
using namespace std;

int n,od,ev;

int main(){
  cin>>n;
  for(int i=1;i<=n;++i){
    int x;
    cin>>x;
    od+=x;
    cin>>x;
    ev+=x;
  }
  cout<<(od==ev?"NO":"YES");
  return 0;
}
