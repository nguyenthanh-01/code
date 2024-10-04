#include <iostream>
#include <cmath>

using namespace std;
using ll = long long;

int main() {
    ll n; cin >> n;
    ll res = 1;
    int m = sqrt(n);

    for(int i = 1; i < m; i++) {
        if(n%i == 0) {
            res *= n;
        }
    }

    if(n%m == 0) {
        res *= m;
    }

    cout << "Tich = " << res << "\n";

    return 0;
}
