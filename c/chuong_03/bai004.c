#include <stdio.h>
#include <math.h>

typedef long long ll;

ll us_nt (ll);

int main() {
    ll a;
    scanf("%lld", &a);
    printf("%lld \n", us_nt(a));
    return 0;
}

ll us_nt (ll a) {
    ll tmp;
    for (int i = 2; i <= sqrt(a); i++) {
        if (a%i == 0) {
            tmp = i;
            while (a%i == 0) {
                a /= i;
            }
        }
    }
    return (a > 1) ? a : tmp;
}
