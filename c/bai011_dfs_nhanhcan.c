#include <stdio.h>

const int inf = (int) 1e9;

void test_1(int, int, int []);
int test_2(int, int, int []);

int main() {
    int n;
    scanf("%d", &n);

    int a[] = {inf, 1};
    int cnt = 0;
    test_1(n, cnt, a);
    a[0]++;
    test_2(n, cnt, a);

    printf("\n");
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

int test_2(int n, int cnt, int a[]) {
    if(a[0] == cnt) {
        return 0;
    }

    if(n == 1) {
        printf("%d ", n);
        return 1;
    }

    if(n % 2 == 0) {
        if(test_2(n / 2, cnt + 1, a)) {
            printf("%d ", n);
            return 1;
        }
    }

    if(n % 3 == 0) {
        if(test_2(n / 3, cnt + 1, a)) {
            printf("%d ", n);
            return 1;
        }
    }

    if(test_2(n - 1, cnt + 1, a)) {
        printf("%d ", n);
        return 1;
    }

    return 0;
}
