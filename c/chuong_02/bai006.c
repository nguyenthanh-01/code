#include <stdio.h>
#include <math.h>

typedef long long ll;

int main() {
    ll a;
    scanf("%lld", &a);
    ll tmp = sqrt(a);
    ll res = 0;
    for (ll i = 1; i < tmp; i++) {
        if (a%i == 0) {
            res += i;
            res += (a / i);
        }
    }
    if (a%tmp == 0) res += tmp;
    printf("%lld \n", res);
    return 0;
}
