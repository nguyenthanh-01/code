#include <stdio.h>

#define ll long long

int main() {
    int x;
    scanf("%d", &x);

    ll A = (ll) x * x * x + (ll) x * x * 3 + x + 1;
    printf("A = %lld", A);

    return 0;
}
