#include <iostream>

using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    int sum = 0;

    for(int i = 1; i <= n; i++) {
        sum += i;
    }

    cout << "S = " << sum << "\n";

    return 0;
}
