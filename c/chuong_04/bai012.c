#include <stdio.h>

typedef long long ll;

void dq(ll n);

int main() {
    ll n;
    scanf("%lld", &n);
    dq(n);
    return 0;
}

void dq(ll n) {
    if (n < 16) {
        if (n <= 9) {
            printf("%lld", n);
        } else printf("%c", n + 55);
    } else {
        dq(n / 16);
        int r = n % 16;
        if (r <= 9) {
            printf("%d", r);
        } else printf("%c", r + 55);
    }
}
