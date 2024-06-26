#include <stdio.h>

void test_1(int, int []);

int main() {
    int n;
    scanf("%d", &n);

    int a[] = {1};
    test_1(n, a);

    printf("%d \n", n);
    return 0;
}

void test_1(int n, int a[]) {
    if(a[0] == 0) {
        printf("%d ", n);
        return;
    }

    if(n == 1) {
        printf("1 ");
        a[0] = 0;
        return;
    }

    if(n % 2 == 0) {
        test_1(n / 2, a);
    }

    if(n % 3 == 0) {
        test_1(n / 3, a);
    }

    test_1(n - 1, a);
}
