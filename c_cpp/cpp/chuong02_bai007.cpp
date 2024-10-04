#include <iostream>
#include <cmath>

using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    int _n = sqrt(n) + 1;

    for(int i = 1; i < _n; i++) {
        if(n%i == 0) {
            cout << i << " ";

            if(i != n / i) {
                cout << n / i << " ";
            }
        }
    }

    return 0;
}
