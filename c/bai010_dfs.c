#include <stdio.h>

const int inf = (int) 1e9;

int test_1(int, int, int []);

int main() {
    int n;
    scanf("%d", &n);

    int a[] = {inf};
    int cnt = 0;
    test_1(n, cnt, a);

    printf("\n");
    return 0;
}

int test_1(int n, int cnt, int a[]) {
    if(n == 1) {
        printf("%d ", n);
        return 1;
    }

    if(n % 2 == 0) {
        if(test_1(n / 2, cnt + 1, a)) {
            printf("%d ", n);
            return 1;
        }
    }

    if(n % 3 == 0) {
        if(test_1(n / 3, cnt + 1, a)) {
            printf("%d ", n);
            return 1;
        }
    }

    if(test_1(n - 1, cnt + 1, a)) {
        printf("%d ", n);
        return 1;
    }

    return 0;
}
