#include <stdio.h>

#define min(a, b) ((a) < (b)) ? (a) : (b)

typedef long long ll;

int thao_tac (ll);

int main() {
    ll a;
    scanf("%lld", &a);
    (a == 1) ? printf("1 \n") : printf("%d \n", thao_tac(a));
    return 0;
}

int thao_tac (ll a) {
    if (a == 1) return 0;
    int res1 = 1e9, res2 = 1e9, res3 = 1e9;
    if (a%3 == 0) res1 = thao_tac(a / 3) + 1;
    if (a%2 == 0) res2 = thao_tac(a / 2) + 1;
    res3 = thao_tac(a - 1) + 1;
    return min(res1, min(res2, res3));
}
