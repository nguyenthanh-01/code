#include <iostream>
#include <cmath>

using namespace std;
using ll = long long;

int main() {
    ll n; cin >> n;
    ll sum = 0;
    int m = sqrt(n);
    ll m2 = (ll) m * m;

    for(int i = 1; i <= m; i++) {
        if(n%i == 0) {
            sum += (i + n / i);
        }
    }

    if(m2 == n) {
        sum -= m;
    }

    cout << "Tong = " << sum << "\n";

    return 0;
}
