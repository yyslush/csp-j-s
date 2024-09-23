#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
  int a;
  char b; 
  double c,d;
  scanf("%c",&b);
  scanf("%d",&a);
  scanf("%lf",&c);
  scanf("%lf",&d);
  cout<<b<<" "<<a<<" ";
  printf("%0.6lf%",c);
  cout<<" ";
  printf("%0.6lf",d);
  return 0;
}
