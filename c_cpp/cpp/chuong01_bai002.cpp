#include <iostream>

using namespace std;
using ll = long long;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    ll S = 1ll * a * (b + c) + 1ll * b * (a + c);
    cout << "S = " << S;

    return 0;
}
