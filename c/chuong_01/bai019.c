#include <stdio.h>

typedef long long ll;

int main() {
    ll a, b;
    scanf("%lld %lld", &a, &b);
    ll ans = (a / 2 * b) + (a % 2 * b / 2);
    printf("%lld \n", ans);
    return 0;
}
