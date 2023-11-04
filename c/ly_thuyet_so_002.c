#include <stdio.h>
#include <math.h>

typedef long long ll;

void ts_nt (int);
int ucln (int, int);
int bcnn (int, int);
int tn (int);
ll th (int, int);
ll gt (int, int);

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("1. thua so nguyen to: "); ts_nt(a);
    printf("2. uoc chung lon nhat: %d \n", ucln(a, b));
    printf("2. boi chung nho nhat: %d \n", bcnn(a, b));
    printf("3. so thuan nghich: %d \n", tn(a));
    printf("4. to hop C(k, n): %lld \n", th(a, b));
    return 0;
}

void ts_nt(int a) {
    for (int i = 2; i * i <= a; i++) {
        while (a%i == 0) {
            printf("%d ", i);
            a /= i;
        }
    }
    if (a > 1) printf("%d \n", a);
}

int ucln (int a, int b) {
    while (b) {
        int tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

int bcnn (int a, int b) {
    return a / ucln(a, b) * b;
}

int tn (int a) {
    int tmp = a;
    int res = 0;
    while (tmp) {
        res = res * 10 + tmp % 10;
        tmp /= 10;
    }
    return (res == a) ? 1 : 0;
}

ll th (int a, int b) {
    int tmp = (a < b - a) ? a : b - a;
    return gt(b, b - tmp) / gt(tmp, 1);
}

/*
C(k, n) = C(n - k, n)
*/

ll gt (int a, int b) {
    ll res = 1;
    for (int i = a; i > b; i--) {
        res *= i;
    }
    return res;
}
