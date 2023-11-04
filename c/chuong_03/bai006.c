#include <stdio.h>

typedef long long ll;

ll tu (ll);

int main() {
    ll a;
    scanf("%lld", &a);
    printf("%lld \n", tu(a));
    return 0;
}

ll tu (ll a) {
    int tmp = sqrt(a);
    ll res = 0;
    for (int i = 1; i <= tmp; i++) {
        if (a%i == 0) {
            res += (i + a / i);
        }
    }
    return (1ll * tmp * tmp == a) ? res - tmp : res;
}
