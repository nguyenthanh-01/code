#include <stdio.h>
#include <math.h>

#define ll long long

int main() {
    ll n;
    scanf("%lld", &n);

    ll sum = 0;
    int m = sqrt(n);

    for(int i = 1; i < m; i++) {
        if(n%i == 0) {
            sum += (i + n / i);
        }
    }

    if(1ll * m * m == n) {
        sum += m;
    }

    printf("Tong = %lld", sum);

    return 0;
}
