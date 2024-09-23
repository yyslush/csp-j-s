#include <iostream>
using namespace std;
int n;
int a[100005], lmax[100005], rmax[100005];

int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) scanf("%d",&a[i]);

    for (int i = 1; i <= n; i++) lmax[i] = max(lmax[i - 1], a[i]);

    for (int i = n; i >= 1; i--) rmax[i] = max(rmax[i + 1], a[i]);

    long long ans = 0;
    for (int i = 2; i < n; i++){
        int t = min(lmax[i - 1], rmax[i + 1]);
        if(a[i] >= t) continue;
        ans += t - a[i];
    }
    printf("%lld\n", ans);
    return 0;
}
