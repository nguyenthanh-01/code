#include <stdio.h>

typedef long long ll;

int main() {
    int a;
    scanf("%d", &a);
    ll res = 1;
    for (int i = 1; i <= a; i++) {
        res *= i;
    }
    printf("%lld \n", res);
    return 0;
}
