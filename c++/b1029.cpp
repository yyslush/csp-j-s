#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
  int n,x,y,k;
  cin>>n>>x>>y;
  k=y/x;
  if ((k<=n)&&(k*x<y)) k++;
  else if (k>n) k=n;
  printf("%d",n-k);
  return 0;
}
