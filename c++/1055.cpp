#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
bool prime(int x)
{
	int i;
	if (x==1) return false;
    for(i=2;i<=sqrt(x);i++)
      if (x %i==0){ return false;break; }
    return true;  
}
int main()
{
   int n,i,j;
   cin>>n;
   for (i=4;i<=n;i++)
     for (j=2;j<=i;j++)
	   if ((i%2==0)&&prime(j)&&prime(i-j)&&(i-j>=j)) cout<<i<<"="<<j<<"+"<<i-j<<endl;	
}
