#include <stdio.h>

typedef long long ll;

ll tong (int);

int main() {
    int a;
    scanf("%d", &a);
    printf("%lld \n", tong(a));
    return 0;
}

ll tong (int a) {
    ll res = 0;
    while (a) {
        res += (1ll * a * a * a);
        a--;
    }
    return res;
}
