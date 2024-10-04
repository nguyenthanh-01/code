#include <iostream>
#include <cmath>

using namespace std;
using ll = long long;

int main() {
    ll n; cin >> n;
    int m = sqrt(n) + 1;

    for(int i = 1; i < m; i++) {
        cout << (ll) i * i << " ";
    }

    return 0;
}
