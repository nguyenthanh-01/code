#include <stdio.h>

typedef long long ll;

void hexa(ll);

int main() {
    ll a;
    scanf("%lld", &a);
    a ? hexa(a) : printf("0 \n");
    return 0;
}

void hexa(ll a) {
    if (a == 0) return;
    hexa(a / 16);
    int tmp = a % 16;
    if (tmp < 10) {
        printf("%d", tmp);
    } else printf("%c", tmp + 55);
}
