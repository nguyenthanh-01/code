#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;
using ll = long long;

int main() {
    ll a, b;
    cin >> a >> b;

    int c = ceil(sqrt(a));
    int d = sqrt(b) + 1;

    for(int i = c; i < d; i++) {
        printf("%lld ", 1ll * i * i);
    }

    return 0;
}
