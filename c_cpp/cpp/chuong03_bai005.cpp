#include <iostream>

using namespace std;
using ll = long long;

ll ucln(ll, ll);
ll bcnn(ll, ll);

int main() {
    ll a, b;
    cin >> a >> b;

    ll gcd = ucln(a, b);
    ll lcm = bcnn(a, b);

    cout << gcd << " " << lcm;

    return 0;
}

ll ucln(ll a, ll b) {
    while(b != 0) {
        ll r = a % b;
        a = b;
        b = r;
    }

    return a;
}

ll bcnn(ll a, ll b) {
    return a / ucln(a, b) * b;
}
