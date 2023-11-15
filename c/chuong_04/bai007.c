#include <stdio.h>

typedef long long ll;

ll gt (int, int);
ll th (int, int);

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%lld \n", th(b, a));
    return 0;
}

ll gt (int a, int b) {
    ll res = 1;
    for (int i = a; i > b; i--) {
        res *= i;
    }
    return res;
}

ll th (int a, int b) {
    int tmp = (a < b - a) ? a : b - a;
    return gt(b, b - tmp) / gt(tmp, 1);
}
