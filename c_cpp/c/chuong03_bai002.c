#include <stdio.h>
#include <math.h>

#define ll long long

void ts_nt(ll);

int main() {
    ll n;
    scanf("%lld", &n);

    ts_nt(n);

    return 0;
}

void ts_nt(ll n) {
    if(n < 2) {
        return;
    }

    while(n%2 == 0) {
        printf("2 ");
        n /= 2;
    }

    int _n = sqrt(n) + 1;

    for(int i = 3; i < _n; i += 2) {
        while(n%i == 0) {
            printf("%d ", i);
            n /= i;
        }
        _n = sqrt(n) + 1;
    }

    if(n > 2) {
        printf("%lld", n);
    }
}
