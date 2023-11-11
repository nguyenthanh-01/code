#include <stdio.h>

#define n 10000000
#define max(a, b) (a > b) ? (a) : (b)

typedef long long ll;

void sang_nguyen_to(int [], ll, ll);
void xuat(int [], ll, ll);

int main() {
    int a[n] = {0};
    ll l, r;
    scanf("%lld %lld", &l, &r);
    sang_nguyen_to(a, l, r);
    xuat(a, l, r);
    return 0;
}

void sang_nguyen_to(int a[], ll l, ll r) {
    for (ll i = l + (l%2 == 0); i <= r; i += 2) {
        a[i - l] = 1;
    }
    for (ll i = 3; i * i <= r; i += 2) {
        for (ll j = max(i * i, (l + i - 1) / i * i); j <= r; j += i) {
            a[j - l] = 0;
        }
    }
}

void xuat(int a[], ll l, ll r) {
    if (l < 3) printf("2 ");
    for (ll i = max(3ll, l + (l%2 == 0)); i <= r; i += 2) {
        if (a[i - l]) {
            printf("%lld ", i);
        }
    }
    printf("\n");
}
