#include <stdio.h>

typedef long long ll;

const ll mod = (ll) 1e18+7;

ll tich_np(ll, ll);

int main() {
    ll a; ll b;
    scanf("%lld %lld", &a, &b);
    printf("%lld \n", tich_np(a, b));
    return 0;
}

ll tich_np(ll a, ll b) {
    a %= mod;
    ll res = 0;
    while (b) {
        if (b%2) {
            res += a;
            res %= mod;
        }
        a *= 2;
        a %= mod;
        b /= 2;
    }
    return res;
}
 
