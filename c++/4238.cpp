#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int t,n,a[3000005],p[1000007],c[15000007],ans;
bool b[15000007];
void makep(int x){
    for (int i=2; i<=sqrt(x); i++)
        if (!b[i])
            for (int j=2; j*i<=x; j++)
                b[i*j]=1;
    for (int i=2; i<=x; i++)
        if (!b[i]) p[++t]=i;
}
inline void work(int x){
    int i=1;
    while(p[i]*p[i]<=x){
        if (x % p[i]==0){
            c[p[i]]++;
            while(x % p[i]==0) x/=p[i];
        }
        i++;
    }
    if (x>1) c[x]++;
}
void deal(int x){
    int t=n;
    long long k=x;
    while(t==n){
        t=0;
        k=k*x;
        if (k>1e7) break;
        for (int i=1; i<=n; i++)
            if (a[i]%k==0) t++;
        c[k]=t;
    }
}

int main()
{
    int mm=0;
    scanf("%d",&n);
    for (int i=1; i<=n; i++) {
        scanf("%d",&a[i]);
        if (a[i]>mm) mm=a[i];
    }
    t=0;
    makep(mm);
    for (int i=1; i<=n; i++)
        work(a[i]);
    ans=-1;
    for (int i=1; i<=mm; i++)
        if (c[i]==n) deal(i);
    for (int i=1; i<=mm; i++)
        if(c[i] && c[i]>ans&& c[i]!=n) ans=c[i];
    if (ans!=-1)
        printf("%d",n-ans);
    else
        printf("-1");
    return 0;
}
