#include <stdio.h>

#define ll long long

int main() {
    int x;
    scanf("%d", &x);

    ll A = 1ll * x * x * x + 3ll * x * x + x + 1;
    printf("A = %lld", A);

    return 0;
}
