#include<cstdio>
#include<iostream>
#include<algorithm>

using namespace std;
struct shiwu
{
    int nt,nh,nf;
}b[1001];

bool cmp(shiwu x,shiwu y)
{
    return x.nt<y.nt;
}
int f[100001];
int main()
{
    //freopen("WELL.in","r",stdin);
    //freopen("WELL.out","w",stdout);
    int n,m;
    scanf("%d%d",&n,&m);
    int trueans=0;
    for(int i=1;i<=m;i++) scanf("%d%d%d",&b[i].nt,&b[i].nf,&b[i].nh);
    sort(b+1,b+1+m,cmp);
    f[0]=10;
    int maxx=0;
    for(int i=1;i<=m;i++)
    for(int j=n;j>=0;j--)
        if(f[j]>=b[i].nt)
        {
            f[j+b[i].nh]=max(f[j+b[i].nh],f[j]);
            f[j]+=b[i].nf;
            if(j+b[i].nh>maxx) maxx=j+b[i].nh;
            if(maxx>=n)
            {
                cout<<b[i].nt;
                return 0;
            }
        }
    cout<<f[0];
    return 0;
}
