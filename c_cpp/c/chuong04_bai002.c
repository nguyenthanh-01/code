#include <stdio.h>

#define ll long long

void tong(int, ll *);

int main() {
    int n;
    scanf("%d", &n);

    ll s = 0;

    tong(n, &s);

    printf("%lld", s);

    return 0;
}

void tong(int n, ll *s) {
    if(n == 0) {
        return;
    }

    *s += 1ll * n * n;
    tong(n - 1, s);
}
