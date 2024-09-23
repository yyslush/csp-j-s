#include<cstdio>
using namespace std;
  
int main()
{
    int n,m,a,b,p=0;
    scanf("%d%d",&n,&m);
    for (int i=1;i<=m;++i)
    {
        scanf("%d%d",&a,&b);
        if (a==1) p+=b;else p-=b;
        if (p>n) p%=n;else if(p<0) p+=n;
    }
    for (int i=p;i<=n-1;++i ) printf("%d\n",i);
    for (int i=0;i<p;++i ) printf("%d\n",i);
    return 0;
}
