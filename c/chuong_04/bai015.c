#include <stdio.h>

typedef long long ll;

int num (ll a);

int main() {
    ll a;
    scanf("%lld", &a);
    printf("%d", num(a));
    return 0;
}

int num (ll a) {
    while (a > 9) {
        a /= 10;
    }
    return a;
}
