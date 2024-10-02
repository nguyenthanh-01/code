#include <iostream>
using namespace std;
using ll = long long;

int main() {
    int x; cin >> x;
    ll A = (ll) x * x * x + (ll) x * x * 3 + x + 1;

    cout << "A = " << A;

    return 0;
}
