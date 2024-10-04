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
            res *= ((ll) i * n / i);
        }
    }

    if(n%m == 0) {
        res *= m;
    }

    printf("Tich = %lld", res);

    return 0;
}
