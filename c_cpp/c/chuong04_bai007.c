#include <stdio.h>

#define ll long long

const int Mod = (int) 1e9 + 7;

ll luy_thua_bin(ll, ll);

int main() {
    ll a, b;
    scanf("%lld %lld", &a, &b);

    ll ans = luy_thua_bin(a, b);

    printf("%lld", ans);

    return 0;
}

ll luy_thua_bin(ll a, ll b) {
    ll res = 1;

    while(b != 0) {
        if(b%2 == 0) {
            a = (a * a) % Mod;
            b /= 2;
        }
        else {
            res = (res * a) % Mod;
            b -= 1;
        }
    }

    return res;
}
