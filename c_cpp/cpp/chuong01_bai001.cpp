#include <iostream>

using namespace std;
using ll = long long;

int main() {
    int x; cin >> x;
    
    ll a = (ll) x * x * x + (ll) x * x * 3 + x + 1;
    cout << a;

    return 0;
}
