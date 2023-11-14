#include <stdio.h>

#define max(a, b) (a > b) ? (a) : (b)
#define n (int) 1e7
int snt[n];

typedef long long ll;

void sang_nguyen_to(ll, ll);
void xuat(ll, ll);

int main() {
    ll l, r;
    scanf("%lld %lld", &l, &r);
    sang_nguyen_to(l, r);
    xuat(l, r);
    return 0;
}

void sang_nguyen_to(ll l, ll r) {
    for (ll i = l + (l%2 == 0); i <= r; i += 2) {
        snt[i - l] = 1;
    }
    for (ll i = 3; i * i <= r; i += 2) {
        for (ll j = max(i * i, (l + i - 1) / i * i); j <= r; j += i) {
            snt[j - l] = 0;
        }
    }
}

void xuat(ll l, ll r) {
    if (l < 3) printf("2 ");
    for (ll i = max(3ll, l + (l%2 == 0)); i <= r; i += 2) {
        if (snt[i - l]) {
            printf("%lld ", i);
        }
    }
    printf("\n");
}
