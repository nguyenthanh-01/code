#include <iostream>

using namespace std;
using ll = long long;

const int MOD = (int) 1e9 + 7;

ll luy_thua_bin(ll, ll);

int main() {
    ll a, b;
    cin >> a >> b;

    ll ans = luy_thua_bin(a, b);

    cout << ans;

    return 0;
}

ll luy_thua_bin(ll a, ll b) {
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
