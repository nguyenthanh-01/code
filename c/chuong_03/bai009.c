#include <stdio.h>
#include <math.h>

typedef long long ll;

int main() {
    ll a, b;
    scanf("%lld %lld", &a, &b);
    ll tmp1 = sqrt(b);
    ll tmp2 = ceil(sqrt(a));
    printf("%lld \n", tmp1 - tmp2 + 1);
    return 0;
}
