#include<iostream>
#define L long
using namespace std;
L L w[555],c[555];
double f[555][555];
L L n,m,p;
int main()
{
    cin>>n>>m>>p;
    for (L L i=1; i<n; i++)
        scanf("%lld",&w[i]);
    for (L L i=1; i<=n; i++)
        scanf("%lld",&c[i]);
    for (L L i=0; i<=n; i++)
        for (L L j=0; j<=p; j++)
            f[i][j]=-1;
    f[0][0]=m;
    for (L L i=1; i<=n; i++)
        for (L L j=w[i-1]; j<=p; j++)
            if (f[i-1][j]!=-1)
                for (L L k=w[i]; k<=p; k++)
                    if (j-w[i-1]>k)
                        f[i][k]=max(f[i][k],f[i-1][j]+(j-k-w[i-1])*c[i]*0.95);
                    else if (f[i-1][j]-(j-k-w[i-1])*c[i]>=0)
                            f[i][k]=max(f[i][k],f[i-1][j]+(j-k-w[i-1])*c[i]);
    if (f[n][0]==-1)
        printf("-1\n");
    else
        printf("%0.2lf\n",f[n][0]);
    return 0;
}
