#include <stdio.h>
#include <math.h>

#define n (int) 1e2

void test_1(int []);

int main() {
    int a[n];

    for(int i = 0; i < n; i++) {
        a[i] = 1;
    }

    test_1(a);

    for(int i = 0; i < n; i++) {
        if(a[i] == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}

void test_1(int a[]) {
    a[0] = a[1] = 0;

    int tmp = sqrt(n);
    for(int i = 2; i <= tmp; i++) {
        if(a[i] == 1) {
            for(int j = i * i; j < n; j += i) {
                a[j] = 0;
            }
        }
    }
}
