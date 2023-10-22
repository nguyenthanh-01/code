#include <stdio.h>

typedef long long ll;

int main() {
    ll n, u1, d;
    scanf("%lld %lld %lld", &n, &u1, &d);
    ll un = u1 + (n - 1) * d;
    ll s = n * (u1 + un) / 2;
    printf("%lld \n", s);
    return 0;
}

/*
S = n * (u[1] + u[n]) / 2
u[n] = u[1] + (n - 1) * d
*/
