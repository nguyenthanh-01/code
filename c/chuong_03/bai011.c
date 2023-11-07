#include <stdio.h>
#include <math.h>

typedef long long ll;

int nt (int);
int cs_nt (int);
int sum (int);

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int cnt = 0;
    for (int i = a; i <= b; i++) {
        if (cs_nt(i) == 0 || sum(i) == 0 || nt(i) == 0) {
            continue;
        }
        cnt++;
    }
    printf("%d \n", cnt);
    return 0;
}

int nt(int a) {
    for (int i = 2; i * i <= a; i++) {
        if (a%i == 0) {
            return 0;
        }
    }
    return a > 1;
}

int cs_nt(int a) {
    while (a) {
        int tmp = a % 10;
        if (tmp == 2 || tmp == 3 || tmp == 5 || tmp == 7) {
            a /= 10;
            continue;
        }
        return 0;
    }
    return 1;
}

int sum (int a) {
    int res = 0;
    while (a) {
        res += a%10;
        a /= 10;
    }
    return nt(res);
}
