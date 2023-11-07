#include <stdio.h>
#include <math.h>

typedef long long ll;

int lp (ll);

int main() {
    ll a;
    scanf("%lld", &a);
    printf("%d", lp(a));
    return 0;
}

int lp (ll a) {
    while (a) {
        int tmp = a % 10;
        if (tmp == 0 || tmp == 6 || tmp == 8) {
            a /= 10;
            continue;
        }
        return 0;
    }
    return 1;
}
