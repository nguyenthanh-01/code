#include <stdio.h>

void test_1(int, int []);

int main() {
    int n;
    scanf("%d", &n);

    int a[] = {0};
    test_1(n, a);

    printf("%d \n", a[0]);
    return 0;
}

void test_1(int n, int a[]) {
    if(n == 0) {
        return;
    }

    if(n == 1) {
        a[0]++;
        return;
    }

    test_1(n - 1, a);
    test_1(n - 2, a);
}
