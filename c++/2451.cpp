#include <cstdio>
using namespace std;

int f(int h, int m, int s)
{
	return h*3600+m*60+s;
}
int main()
{
	int z;
	int h1, m1, s1, h2, m2, s2, t;
	scanf("%d", &z);
	while (z-- != 0)
	{
   		scanf("%d %d %d %d %d %d", &h1, &m1, &s1, &h2, &m2, &s2);
   		t = f(h1, m1, s1)+f(h2, m2, s2);
   		printf("%d %d %d\n", t/3600, (t%3600)/60, t%60);
	}
	return 0;
}
  
