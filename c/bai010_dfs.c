#include <stdio.h>
#include <stdlib.h>

const int inf = (int) 1e9;

void test_1(int, int, int []);
void test_2(int, int, int [], int []);

int main() {
    int n;
    scanf("%d", &n);

    int a[] = {inf, 0};
    int cnt = 0;
    test_1(n, cnt, a);

    int *b = (int *) malloc (a[0] * sizeof(int));

    for(int i = 0; i < a[0]; i++) {
        b[i] = 0;
    }
    
    test_2(n, cnt, a, b);

    free(b);
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

void test_2(int n, int cnt, int a[], int b[]) {
    if(a[0] < cnt) {
        return;
    }

    if(n == 1) {
        for(int i = 0; i < a[0]; i++) {
            printf("%d ", b[i]);
        }
        printf("%d \n", n);

        a[1] = 1;
        return;
    }

    b[cnt] = n;

    if(n % 2 == 0) {
        test_2(n / 2, cnt + 1, a, b);
    }

    if(a[1] == 1) {
        return;
    }

    if(n % 3 == 0) {
        test_2(n / 3, cnt + 1, a, b);
    }

    if(a[1] == 1) {
        return;
    }

    test_2(n - 1, cnt + 1, a, b);

    if(a[1] == 1) {
        return;
    }
}
