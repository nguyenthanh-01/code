#include <stdio.h>
#include <math.h>

#define ll long long

int main() {
    ll n;
    scanf("%lld", &n);

    ll sum = 0;
    int m = sqrt(n);
    ll m2 = (ll) m * m;

    for(int i = 1; i <= m; i++) {
        if(n%i == 0) {
            sum += (i + n / i);
        }
    }

    if(m2 == n) {
        sum -= m;
    }

    printf("Tong = %lld", sum);

    return 0;
}
