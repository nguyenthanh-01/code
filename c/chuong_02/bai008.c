#include <stdio.h>
#include <math.h>

typedef long long ll;

int main() {
    ll a;
    scanf("%lld", &a);
    ll tmp = sqrt(a);
    for (ll i = 1; i <= tmp; i++) {
        printf("%lld ", i * i);
    }
    printf("\n");
    return 0;
}
