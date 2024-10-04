#include <iostream>
#include <cmath>

using namespace std;
using ll = long long;

int main() {
    ll n; cin >> n;
    ll sum = 0;
    int _n = sqrt(n);

    for(int i = 1; i <= _n; i++) {
        if(n%i == 0) {
            sum += (i + n / i);
        }
    }

    if(1ll * _n * _n == n) {
        sum -= _n;
    }

    cout << "Tong = " << sum << "\n";

    return 0;
}
