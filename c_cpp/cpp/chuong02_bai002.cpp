#include <iostream>

using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;

    ll sum = (ll) n * (n + 1) * (2 * n + 1) / 6;
    cout << sum << "\n";

    return 0;
}
