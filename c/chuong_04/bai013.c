#include <stdio.h>

typedef long long ll;

int tong (ll n);

int main() {
    ll n;
    scanf("%lld", &n);
    printf("%d", tong(n));
    return 0;
}

int tong (ll n) {
    if (n < 10) {
        return n;
    }
    return n % 10 + tong (n / 10);
}
