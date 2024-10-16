#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;
using ll = long long;

int main() {
    ll a, b;
    cin >> a >> b;

    int l = ceil(sqrt(a));
    int r = sqrt(b) + 1;

    for(int i = l; i < r; i++) {
        printf("%lld ", (ll) i * i);
    }

    return 0;
}
