#include <stdio.h>

#define ll long long

int main() {
    int n;
    scanf("%d", &n);

    ll sum = (ll) n * (n + 1) / 2;
    printf("S = %d", sum);

    return 0;
}
