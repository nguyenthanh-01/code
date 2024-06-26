#include <stdio.h>

const int inf = (int) 1e9;

void test_1(int, int, int []);

int main() {
    int n;
    scanf("%d", &n);

    int a[] = {inf};
    int cnt = 0;
    test_1(n, cnt, a);

    printf("%d \n", a[0]);
    return 0;
}

void test_1(int n, int cnt, int a[]) {
    if(n == 1) {
        if(a[0] > cnt) {
            a[0] = cnt;
        }
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
