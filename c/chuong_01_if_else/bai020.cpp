#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n, m, a;
    cin >> n >> m >> a;
    n += a - 1;
    m += a - 1;
    cout << 1ll * (n/a) * (m/a);
    return 0;
}
