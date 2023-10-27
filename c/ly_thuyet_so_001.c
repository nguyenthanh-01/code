#include <stdio.h>

typedef long long ll;

ll gt (int);
int nt (int);
int tu (int);
int du (int);
int cp (ll);
int hh (int);

int main() {
    int a;
    scanf("%d", &a);
    printf("1. giai thua: %lld \n", gt(a));
    printf("2. so nguyen to: %d \n", nt(a));
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

int nt (int a) {
    for (int i = 2; i * i <= a; i++) {
        if (a%i == 0) {
            return 0;
        }
    }
    return a > 1;
}

int tu (int a) {
        int i = 1;
    int res = 0;
    while (i * i < a) {
    if (a%i == 0) {
            res += (i + a / i);
                }
                i++;
        }
    return (i * i == a) ? res + i : res;
}

int du (int a) {
        int i = 1;
    int res = 0;
    while (i * i < a) {
    if (a%i == 0) {
            res += 2;
                }
                i++;
        }
    return (i * i == a) ? res + 1 : res;
}

int cp (ll a) {
    ll i = 1;
    while (i * i < a) {
    i++;
        }
    return (i * i == a) ? 1 : 0;
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
