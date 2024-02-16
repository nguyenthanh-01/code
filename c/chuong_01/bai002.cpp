#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    ll res = 1ll * a * (b + c) + 1ll * b * (a + c);
    cout << res << "\n";
    return 0;
}
