#include <stdio.h>

#define ll long long

int main() {
    int n;
    scanf("%d", &n);

    ll sum = (ll) n * (n + 1) * (2 * n + 1) / 6;
    printf("S = %lld", sum);

    return 0;
}