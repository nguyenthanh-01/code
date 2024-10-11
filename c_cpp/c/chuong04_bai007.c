#include <stdio.h>

#define ll long long
#define mod 1000000007

ll bin_luy_thua(ll, ll);

int main() {
    ll a, b;
    scanf("%lld %lld", &a, &b);

    ll ans = bin_luy_thua(a, b);

    printf("%lld", ans);

    return 0;
}

ll bin_luy_thua(ll a, ll b) {
    ll res = 1;

    while(b != 0) {
        if(b%2 == 0) {
            a = (a * a) % mod;
            b /= 2;
        }
        else {
            res = (res * a) % mod;
            b -= 1;
        }
    }

    return res;
}
