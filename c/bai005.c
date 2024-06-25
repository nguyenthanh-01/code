#include <stdio.h>
#include <math.h>

typedef long long ll;

ll test_1(double, ll []);

int main() {
    ll a;
    scanf("%lld", &a);

    ll sum[1] = {0};
    ll n = test_1(sqrt(a), sum);

    for(ll i = 1; i < n; i++) {
        if(a % i == 0) {
            sum[0] += (i + a / i);
        }
    }

    printf("%lld \n", sum[0]);
    return 0;
}

ll test_1(double a, ll sum[]) {
    ll b = a;
    if(a > b) {
        return b + 1;
    }
    sum[0] += b;
    return b;
}
