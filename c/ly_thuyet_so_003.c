#include <stdio.h>

typedef long long ll;

int ck_fi (ll);
void xuat_fi(ll);
ll fi_n(int);

int main() {
    ll a;
    scanf("%lld", &a);
    printf("1. kiem tra so fibonaci: %d \n", ck_fi(a));
    printf("2. in ra n so fibonaci: "); xuat_fi(a);
    printf("3. in ra so fibonaci thu n: %lld \n", fi_n(a));
    return 0;
}

int ck_fi (ll a) {
    if (a == 0 || a == 1) return 1;
    ll f0 = 0;
    ll f1 = 1;
    for (int i = 2; i <= 92; i++) {
        ll tmp = f0 + f1;
        if (tmp == a) return 1;
        if (tmp > a) return 0;
        f0 = f1;
        f1 = tmp;
    }
    return 0;
}

void xuat_fi(ll a) {
    if (a == 1) {
        printf("0 \n");
        return;
    }
    if (a == 2) {
        printf("0 1 \n");
        return;
    }
    printf("0 1 ");
    ll f0 = 0;
    ll f1 = 1;
    for (int i = 2; i < a; i++) {
        ll tmp = f0 + f1;
        printf("%lld ", tmp);
        f0 = f1;
        f1 = tmp;
    }
    printf("\n");
}

ll fi_n(int a) {
    if (a == 1) return 0;
    if (a == 2) return 1;
    ll f0 = 0;
    ll f1 = 1;
    ll tmp = 0;
    for (int i = 2; i < a; i++) {
        tmp = f0 + f1;
        f0 = f1;
        f1 = tmp;
    }
    return tmp;
}
