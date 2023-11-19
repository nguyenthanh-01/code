#include <stdio.h>
#include <math.h>

typedef long long ll;

int thao_tac(ll n);

int main() {
    ll n;
    scanf("%lld", &n);
    printf("%d", thao_tac(n));
    return 0;
}

int thao_tac(ll n) {
    if (n == 1) return 0;
    else {
        int res1 = 1e9, res2 = 1e9, res3 = 1e9;
        if (n%2 == 0) res1 = thao_tac(n / 2) + 1;
        if (n%3 == 0) res2 = thao_tac(n / 3) + 1;
        if (n > 1) res3 = thao_tac(n - 1) + 1;
        return fmin(res1, fmin(res2, res3));
    }
}
