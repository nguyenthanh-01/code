#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n, a, b;
    cin >> n >> a >> b;
    if (a*2 <= b) {
        cout << n * a;
    }
    else cout << n / 2 * b + a * (n%2);
    return 0;
}
