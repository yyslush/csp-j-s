#include <bits/stdc++.h>
#define lc (u << 1)
#define rc (u << 1 | 1)
#define T int u = 1 , int l = 1 , int r = n
#define L lc , l , m
#define R rc , m + 1 , r
#define rep(i,a,b) for(int i = a;i <= b;i ++)
#define maxn 100007

typedef long long ll;

ll rd() {
    char c = getchar();
    while (!isdigit(c)) c = getchar( ) ; ll x = c - '0';
    while (isdigit(c = getchar())) x = x * 10 + c - '0';
    return x;
}

ll sum[maxn * 4 + 1] , cnt[maxn * 4 + 1] , a[maxn];
ll n , m , ql , qr;

void build(T) {
    if (l == r)
        { sum[u] = a[l] , cnt[u] = (a[l] <= 1) ; return ; }
    int m = (l + r) >> 1;
    build(L) , build(R);
    sum[u] = sum[lc] + sum[rc];
    cnt[u] = cnt[lc] + cnt[rc];
}

void modi(T) {
    if (cnt[u] == r - l + 1)
        return ;
    if (l == r)
        { sum[u] = (ll)sqrt(sum[u]) , cnt[u] = (sum[u] <= 1) ; return ; }
    int m = (l + r) >> 1;
    if (ql <= m) modi(L);
    if (qr >  m) modi(R);
    sum[u] = sum[lc] + sum[rc];
    cnt[u] = cnt[lc] + cnt[rc];
}

ll que(T) {
    if (ql <= l && r <= qr)
        return sum[u];
    int m = (l + r) >> 1;
    ll ret = 0;
    if (ql <= m) ret += que(L);
    if (qr >  m) ret += que(R);
    return ret;
}

void input() {
    n = rd();
    rep(i , 1 , n) a[i] = rd();
    build();
}

void solve() {
    m = rd();
    rep(i , 1 , m) {
        int k = rd();
        ql = rd() , qr = rd();
        if (ql > qr) std::swap(ql , qr);
        if (k == 1) printf("%lld\n" , que());
        else modi();
    }
}

int main() {
    input();
    solve();
    return 0;
}
