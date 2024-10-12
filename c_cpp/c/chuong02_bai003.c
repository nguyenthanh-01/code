#include <stdio.h>

#define ll long long

int main() {
    int n;
    scanf("%d", &n);

    ll sum = 0;

    for(int i = 0; i <= n; i += 3) {
        sum += i;
    }

    printf("%lld", sum);

    return 0;
}
