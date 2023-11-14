#include <stdio.h>

typedef long long ll;

ll lt_np(ll, ll);

int main() {
    ll a; ll b;
    scanf("%lld %lld", &a, &b);
    printf("%lld \n", lt_np(a, b));
    return 0;
}

ll lt_np(ll a, ll b) {
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
 
