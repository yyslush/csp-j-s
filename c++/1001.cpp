#include <cstdio>
using namespace std;
const double pi=3.14159265;
int main()
{
	double c,s,r;
	scanf("%lf",&r);
	c=pi*r*2;
	s=pi*r*r;
	printf("%0.2lf\n%0.2lf",s,c);
}
