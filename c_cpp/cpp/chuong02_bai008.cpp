#include <iostream>
#include <cmath>

using namespace std;
using ll = long long;

int main() {
    ll n; cin >> n;
    int _n = sqrt(n) + 1;

    for(int i = 1; i < _n; i++) {
        cout << 1ll * i * i << " ";
    }

    return 0;
}
