#include <stdio.h>

typedef long long ll;

int main() {
    ll n;
    scanf("%lld", &n);
    ll u1, d;
    u1 = d = 2;
    ll un = u1 + (n - 1) * d;
    ll ans = n * (u1 + un) / 2;
    printf("%lld \n", ans);
    return 0;
}

/*
S = n * (u[1] + u[n]) / 2
u[n] = u[1] + (n - 1) * d
*/
