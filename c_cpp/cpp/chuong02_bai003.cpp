#include <iostream>

using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    ll sum = 0;

    for(int i = 0; i <= n; i += 3) {
        sum += i;
    }

    cout << sum << "\n";

    return 0;
}
