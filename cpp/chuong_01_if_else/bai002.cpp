#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    ll s = 1ll * a * (b + c) + 1ll * b * (a + c);
    cout << s << "\n";
    return 0;
}
