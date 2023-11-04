#include <stdio.h>
#include <math.h>

typedef long long ll;

int main() {
    ll a, b;
    scanf("%lld %lld", &a, &b);
    int tmp = sqrt(b);
    for (int i = ceil(sqrt(a)); i <= tmp; i++) {
        printf("%lld ", 1ll * i * i);
    }
    printf("\n");
    return 0;
}
