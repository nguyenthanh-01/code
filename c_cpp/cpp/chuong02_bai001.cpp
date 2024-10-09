#include <iostream>

using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;

    ll sum = 1ll * n * (n + 1) / 2;
    cout << "S = " << sum << "\n";

    return 0;
}
