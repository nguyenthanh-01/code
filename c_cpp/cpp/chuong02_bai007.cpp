#include <iostream>
#include <cmath>

using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    int m = sqrt(n);

    for(int i = 1; i < m; i++) {
        if(n%i == 0) {
            cout << i << " " << n / i << " ";
        }
    }

    if(1ll * m * m == n) {
        cout << m << " ";
    }

    return 0;
}
