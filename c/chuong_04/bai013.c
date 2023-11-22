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
    int tmp = 0;
    while (a) {
        tmp += a % 10;
        a /= 10;
    }
    return tmp;
}
