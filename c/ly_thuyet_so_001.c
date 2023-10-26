#include <stdio.h>
#include <math.h>

typedef long long ll;

ll gt (int);
int snt (int);
int tu (int);
int du (int);
int cp (ll);
int hh (int);

int main() {
    int a;
    scanf("%d", &a);
    printf("1. giai thua: %lld \n", gt(a));
    printf("2. so nguyen to: %d \n", snt(a));
    printf("3. tong uoc: %d \n", tu(a));
    printf("3. dem uoc: %d \n", du(a));
    printf("4. so chinh phuong: %d \n", cp(a));
    printf("5. so hoan hao: %d \n", hh(a));
    return 0;
}

ll gt (int a) {
    ll res = 1;
    for (int i = 1; i <= a; i++) {
        res *= i;
    }
    return res;
}

int snt (int a) {
    for (int i = 2; i * i <= a; i++) {
        if (a%i == 0) {
            return 0;
        }
    }
    return a > 1;
}

int tu (int a) {
    int res = 0;
    for (int i = 1; i * i <= a; i++) {
        if (a%i == 0) {
            res += (i + a / i);
        }
    }
    int tmp = sqrt(a);
    return (tmp * tmp == a) ? res - tmp : res;
}

int du (int a) {
    int res = 0;
    for (int i = 1; i * i <= a; i++) {
        if (a%i == 0) {
            res += 2;
        }
    }
    int tmp = sqrt(a);
    return (tmp * tmp == a) ? res - 1 : res;
}

int cp (ll a) {
    int tmp = sqrt(a);
    return (1ll * tmp * tmp == a) ? 1 : 0;
}

int hh (int a) {
    int res = 1;
    for (int i = 2; i * i <= a; i++) {
        if (a%i == 0) {
            res += (i + a / i);
        }
    }
    return res == a;
}
