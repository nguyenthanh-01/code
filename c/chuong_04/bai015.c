#include <stdio.h>

typedef long long ll;

int tong (ll a);

int main() {
    ll a;
    scanf("%lld", &a);
    printf("%d", tong(a));
    return 0;
}

int tong (ll a) {
    while (a > 9) {
        a /= 10;
    }
    return a;
}
