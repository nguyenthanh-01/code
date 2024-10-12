#include <iostream>

using namespace std;
using ll = long long;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    ll s = (ll) a * (b + c) + (ll) b * (a + c);
    cout << s;

    return 0;
}
