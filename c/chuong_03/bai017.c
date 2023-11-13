#include <stdio.h>

typedef long long ll;

ll ucln (ll, ll);
ll bcnn (ll, ll);

int main() {
    ll a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld %lld \n", ucln(a, b), bcnn(a, b));
    return 0;
}

ll ucln (ll a, ll b) {
    while (b) {
        ll tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

ll bcnn (ll a, ll b) {
    return a / ucln(a, b) * b;
}
