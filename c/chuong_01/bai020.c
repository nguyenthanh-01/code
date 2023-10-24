#include <stdio.h>

typedef long long ll;

int main() {
    ll a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    a += c - 1;
    b += c - 1;
    ll ans = (a / c) * (b / c);
    printf("%lld \n", ans);
    return 0;
}
