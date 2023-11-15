#include <stdio.h>

typedef long long ll;

ll fi_n(int);

int main() {
    int a;
    scanf("%d", &a);
    printf("%lld \n", fi_n(a));
    return 0;
}

ll fi_n(int a) {
    if (a == 1) return 0;
    if (a == 2) return 1;
    ll f0 = 0;
    ll f1 = 1;
    ll tmp = 0;
    for (int i = 2; i < a; i++) {
        tmp = f0 + f1;
        f0 = f1;
        f1 = tmp;
    }
    return tmp;
}
