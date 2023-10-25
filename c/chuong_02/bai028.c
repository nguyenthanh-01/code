#include <stdio.h>

typedef long long ll;

int main() {
    int a;
    scanf("%d", &a);
    ll tmp = 1;
    ll res = 0;
    for (int i = 1; i <= a; i++) {
        tmp *= i;
        res += tmp;
    }
    printf("%lld \n", res);
    return 0;
}
