#include <stdio.h>

typedef long long ll;

ll tich_np(ll, ll);

int main() {
    ll a; ll b;
    scanf("%lld %lld", &a, &b);
    printf("%lld \n", tich_np(a, b));
    return 0;
}

ll tich_np(ll a, ll b) {
    ll res = 0;
    while (b) {
        if (b%2) {
            res += a;
        }
        a *= 2;
        b /= 2;
    }
    return res;
}
 
