#include <iostream>
using namespace std;
int c,n;
double cash=0;

int main()
{
  cin>>c>>n;
  switch (c)
   {
    case 1:
      if(n<=2) cash=10*n;
      if(n>2&&n<=10) cash=10*2+(n-2)*9;
      if(n>10) cash=10*2+(10-2)*9+7.5*(n-10);
      break;
    case 2:
      if(n<=10) cash=9*n;
      if(n>10&&n<=50) cash=9*n*0.8;
      if(n>50) cash=9*n*0.6;
      break;
    case 3:
      if(n<50) cash=6*n;
      if(n>=50&&n<100) cash=n*5;
      if(n>=100) cash= 4*n;
      break;
  }
  printf("%0.2lf",cash );
  return 0;
}
