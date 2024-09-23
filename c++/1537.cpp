#include<cstdio>
int gcd(int a,int b);
int lcm(int a,int b);
int main()
{
    int x,y,p,q;
    int N=0;
    scanf("%d%d",&x,&y);
    for(p=x;p<=y;p++)
    {
        if(y%p==0)
        {
            q=y/p*x;
            if(gcd(p,q)==x&&lcm(p,q)==y) N++;
        }
    }
    printf("%d\n",N);
    return 0;
}
int gcd(int a,int b)
{
    int c;
    if(b==0) return -1;
    c=a%b;
    while(c!=0)
    {
        a=b;
        b=c;
        c=a%b;
    }
    return b;
}
int lcm(int a,int b)
{
    if(a==0||b==0) return -1;
    return a*b/gcd(a,b);
}
