#include <stdio.h>
#include <math.h>

#define ll long long

int main() {
    ll n;
    scanf("%lld", &n);

    ll res = 1;
    int m = sqrt(n);

    for(int i = 1; i < m; i++) {
        if(n%i == 0) {
            res *= n;
        }
    }

    if(1ll * m * m == n) {
        res *= m;
    }

    printf("Tich = %lld", res);

    return 0;
}
