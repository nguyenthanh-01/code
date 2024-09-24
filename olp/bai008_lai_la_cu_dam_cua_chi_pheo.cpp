#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int mod = (int) 1e9 + 7;
const int inv = (int) 166666668;

ll nhan_an_do(ll, ll);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while(t--) {
        ll n; cin >> n;
        n %= mod;

        ll a = nhan_an_do(n, n + 1);
        ll b = nhan_an_do(a, n + 2);
        ll c = nhan_an_do(b, inv);

        cout << c << "\n";
    }

    return 0;
}

ll nhan_an_do(ll a, ll b) {
    ll val = 0;

    while(b) {
        if(b%2 == 0) {
            a = (a * 2) % mod;
            b /= 2;
        }
        else {
            val = (val + a) % mod;
            b -= 1;
        }
    }

    return val;
}
