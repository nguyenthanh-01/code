#include <stdio.h>

typedef long long ll;

ll lt_np(ll, int);

int main() {
    ll a; int b;
    scanf("%lld %d", &a, &b);
    printf("%lld \n", lt_np(a, b));
    return 0;
}

ll lt_np(ll a, int b) {
    ll res = 1;
    while (b) {
        if (b%2) {
            res *= a;
        }
        a *= a;
        b /= 2;
    }
    return res;
}
