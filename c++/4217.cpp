#include <iostream>
using namespace std;
const int N=1E6+5;
const int INF=1E9+5;
int n,x,sum[N];
int mmin,mmax;
int main()
{
    scanf("%d",&n);
    sum[0]=0;
    mmin=INF;
    mmax=-INF;
    for (int i=1; i<=n; i++)
    {
        scanf("%d",&x);
        sum[i]=sum[i-1]+x;
        mmin=min(mmin,sum[i]);
        mmax=max(mmax,sum[i]);
    }
    if (mmax<0) mmax=0;
    if (mmin>0) mmin=0;
    cout<<mmax-mmin<<endl;
    return 0;
}
