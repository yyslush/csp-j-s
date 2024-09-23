#include <cmath>
#include <cstdio>
#include <cstdlib>
int main(int argc, char **argv)
{
    double t1, t2,h, s1, v, l, k,d1, d2;
    int g = 10;
    int n;
    scanf("%lf%lf%lf%lf%lf%d", &h, &s1, &v, &l, &k, &n);
    t1 = sqrt(2*(h -(k)) / g);
    t2 = sqrt(2 * h / g);
    d2 = s1 - v * t1 + l;
    d1 = s1 - v * t2;
    if(d1 < 0)
        d1 = 0;
    if(d2 > n)
        d2 = n;
    if(d1 > d2)
        d1 = d2;
    printf("%d\n", (int)(d2) - (int)(d1));
    return 0;
}
