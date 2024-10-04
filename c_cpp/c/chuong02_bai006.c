#include <stdio.h>
#include <math.h>

#define ll long long

int main() {
    ll n;
    scanf("%lld", &n);

    ll sum = 0;
    int _n = sqrt(n);

    for(int i = 1; i <= _n; i++) {
        if(n%i == 0) {
            sum += (i + n / i);
        }
    }

    if(1ll * _n * _n == n) {
        sum -= _n;
    }

    printf("Tong = %lld", sum);

    return 0;
}
