#include <stdio.h>

const int inf = (int) 1e9;

void test_1(int, int, int []);

int main() {
    int n;
    scanf("%d", &n);

    int a[] = {inf, 0};
    int cnt = 0;
    test_1(n, cnt, a);

    printf("%d \n", ck);
    return 0;
}

void test_1(int n, int cnt, int a[]) {
    if(a[0] == cnt) {
        return;
    }

    if(n == 1) {
        a[0] = cnt;
        a[1] = 1;
        return;
    }

    if(n % 2 == 0) {
        test_1(n / 2, cnt + 1, a);
    }

    if(a[1] == 1) {
        return;
    }

    if(n % 3 == 0) {
        test_1(n / 3, cnt + 1, a);
    }

    if(a[1] == 1) {
        return;
    }

    test_1(n - 1, cnt + 1, a);

    if(a[1] == 1) {
        return;
    }
}
