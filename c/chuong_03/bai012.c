#include <stdio.h>
#include <math.h>

typedef long long ll;

int tn (int);
int ts_nt (int);

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int flag = 1;
    for (int i = a; i <= b; i++) {
        if (tn(i) == 0 || ts_nt(i) == 0) {
            continue;
        }
        flag = 0;
        printf("%d ", i);
    }
    if (flag) printf("-1 ");
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
    return (res == a) ? 1 : 0;
}

int ts_nt (int a) {
    int cnt = 0;
    for (int i = 2; i * i <= a; i++) {
        if (a%i == 0) {
            cnt++;
            while (a%i == 0) {
                a /= i;
            }
        }
    }
    if (a > 1) cnt++;
    return cnt > 2;
}
