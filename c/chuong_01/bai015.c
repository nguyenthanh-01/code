#include <stdio.h>

typedef long long ll;

int main() {
    ll a, b, c;
    scanf("%lld %lld %lld", &c, &a, &b);
    if (a * 2 <= b) {
        printf("%lld \n", c * a);
    }
    else printf("%lld \n", (c / 2 * b) + (c % 2 * a));
    return 0;
}
