#include <stdio.h>
#include <math.h>

typedef long long ll;

int tn (int);
int ck_6 (int);
int ck_8 (int);

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++) {
        if (tn(i) == 0 || ck_8(i) == 0 || ck_6(i) == 0) {
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}

int tn (int a) {
    int tmp = a;
    int res = 0;
    while (tmp) {
        res = res * 10 + tmp % 10;
        tmp /= 10;
    }
    return res == a;
}

int ck_6 (int a) {
    while (a) {
        int tmp = a % 10;
        if (tmp == 6) {
            return 1;
        }
        a /= 10;
    }
    return 0;
}

int ck_8 (int a) {
    int res = 0;
    while (a) {
        res += a % 10;
        a /= 10;
    }
    return res % 10 == 8;
}
