#include <stdio.h>

typedef long long ll;

int main() {
    ll a;
    scanf("%lld", &a);
    a /= 28;
    int res = a;
    while (2 < a) {
        res += a / 3;
        int tmp = a % 3;
        a = a / 3 + tmp;
    }
    printf("%d \n", res);
    return 0;
}
