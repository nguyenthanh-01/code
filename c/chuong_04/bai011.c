#include <stdio.h>

typedef long long ll;

void np (ll);

int main() {
    ll a;
    scanf("%lld", &a);
    a ? np(a) : printf("0 \n");
    return 0;
}

void np (ll a) {
    if (a == 0) return;
    np(a / 2);
    printf("%d", a % 2);
}
