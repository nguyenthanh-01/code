#include <stdio.h>
#include <math.h>

typedef long long ll;

int sphenic (ll);

int main() {
    ll a;
    scanf("%lld", &a);
    if (sphenic(a)) {
        printf("1");
    }
    else printf("0");
    return 0;
}

int sphenic (ll a) {
    int cnt = 0;
    for (ll i = 2; i * i <= a; i++) {
        int cnt1 = 0;
        while (a%i == 0) {
            cnt1++;
            cnt++;
            a /= i;
        }
        if (cnt1 > 1) return 0;
    }
    if (a > 1) cnt++;
    return cnt == 3;
}
