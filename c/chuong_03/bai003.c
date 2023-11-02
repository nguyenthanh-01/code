#include <stdio.h>
#include <math.h>

typedef long long ll;

void ts_nt (ll);

int main() {
    ll a;
    scanf("%lld", &a);
    ts_nt(a);
    return 0;
}

void ts_nt (ll a) {
    for (int i = 2; i <= sqrt(a); i++) {
        int cnt = 0;
        while (a%i == 0) {
            cnt++;
            a /= i;
        }
        if (cnt) {
            printf("%lld^%d", i, cnt);
            if (a > 1) printf(" * ");
        }
    }
    if (a > 1) printf("%lld^1", a);
}
