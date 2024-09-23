#include <iostream>
#include <cmath>
using namespace std;

int n,divi;

int main(){
  cin>>n;
  int i=2;
  while(n%i!=0 && i<=int(sqrt(n))) ++i;
  divi=n/i;
  if(divi==0) divi=1;
  cout<<divi;
  return 0;
}
