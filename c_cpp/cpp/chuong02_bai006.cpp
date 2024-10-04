#include <iostream>
#include <cmath>

using namespace std;
using ll = long long;

int main() {
    ll n; cin >> n;
    ll sum = 0;
    int _n = sqrt(n) + 1;

    for(int i = 1; i < _n; i++) {
        if(n%i == 0) {
            sum += i;

            if(i != n / i) {
                sum += n / i;
            }
        }
    }

    cout << "Tong = " << sum << "\n";

    return 0;
}
