#include <stdio.h>

const int inf = (int) 1e9;

void test_1(int, int, int []);
void test_2(int, int, int []);

int main() {
    int n;
    scanf("%d", &n);

    int a[] = {inf, 1};
    int cnt = 0;
    test_1(n, cnt, a);
    test_2(n, cnt - 1, a);

    printf("%d \n", n);
    return 0;
}

void test_1(int n, int cnt, int a[]) {
    if(a[0] == cnt) {
        return;
    }

    if(n == 1) {
        a[0] = cnt;
        return;
    }

    if(n % 2 == 0) {
        test_1(n / 2, cnt + 1, a);
    }

    if(n % 3 == 0) {
        test_1(n / 3, cnt + 1, a);
    }

    test_1(n - 1, cnt + 1, a);
}

void test_2(int n, int cnt, int a[]) {
    if(a[0] == cnt) {
        return;
    }

    if(a[1] == 0) {
        printf("%d ", n);
        return;
    }

    if(n == 1) {
        printf("1 ");
        a[1] = 0;
        return;
    }

    if(n % 2 == 0) {
        test_2(n / 2, cnt + 1, a);
    }

    if(n % 3 == 0) {
        test_2(n / 3, cnt + 1, a);
    }

    test_2(n - 1, cnt + 1, a);
}
