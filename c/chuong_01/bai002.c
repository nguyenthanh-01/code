#include <stdio.h>

typedef long long ll;

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    ll ans = 1ll * a * (b + c) + 1ll * b * (a + c);
    printf("%lld \n", ans);
    return 0;
}
