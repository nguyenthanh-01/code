#include <stdio.h>

#define ll long long

int main() {
    int x;
    scanf("%d", &x);

    ll a = (ll) x * x * x + (ll) x * x * 3 + x + 1;
    printf("%lld", a);

    return 0;
}
