#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

typedef long long ll;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    ll res = 1ll * a * (b + c) + 1ll * b * (a + c);
    cout << res << endl;
    return 0;
}
