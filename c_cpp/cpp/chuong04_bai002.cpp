#include <iostream>

using namespace std;
using ll = long long;

void tong(int, ll &);

int main() {
    int n; cin >> n;
    ll s = 0;

    tong(n, s);

    cout << s;

    return 0;
}

void tong(int n, ll &s) {
    if(n == 0) {
        return;
    }

    s += 1ll * n * n;
    tong(n - 1, s);
}
