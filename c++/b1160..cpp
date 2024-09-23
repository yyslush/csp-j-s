#include<cstdio>
#include<cmath>
double x;
using namespace std;
double  arc(int i)
{
	double f;
	f=pow(x,i)/i;	
	if (f<0.000001) return f;
	else	
		return(pow(-1,(i-1)/2)*f+arc(i+2));
	
}
main()
{
  x=1/sqrt(3);      
  printf("%0.9lf",arc(1)*6); 
  return 0;   
  }

