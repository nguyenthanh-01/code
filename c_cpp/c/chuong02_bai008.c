#include <stdio.h>
#include <math.h>

#define ll long long

int main() {
    ll n;
    scanf("%lld", &n);

    int _n = sqrt(n) + 1;

    for(int i = 1; i < _n; i++) {
        printf("%lld ", (ll) i * i);
    }

    return 0;
}
