#include <stdio.h>

typedef long long ll;

int tong (ll a);

int main() {
    ll a;
    scanf("%lld", &a);
    a ? printf("%d", tong(a)) : printf("1");
    return 0;
}

int tong (ll a) {
    int cnt = 0;
    while (a) {
        cnt++;
        a /= 10;
    }
    return cnt;
}
