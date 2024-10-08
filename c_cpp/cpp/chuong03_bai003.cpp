#include <iostream>
#include <cmath>

using namespace std;
using ll = long long;

int main() {
    ll n; cin >> n;

    int m = sqrt(n);

    if(1ll * m * m == n) {
        cout << "yes";
    }
    else {
        cout << "no";
    }

    return 0;
}
