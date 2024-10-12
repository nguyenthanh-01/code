#include <stdio.h>

#define ll long long

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    ll s = (ll) a * (b + c) + (ll) b * (a + c);
    printf("%lld", s);

    return 0;
}
