#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define max(a, b) (a) > (b) ? (a): (b)

void test_1(int [], int, int);

int main() {
    int l, r;
    scanf("%d %d", &l, &r);

    int n = r - l + 1;
    int *a = (int *) malloc (n * sizeof(int));


    for(int i = l; i <= r; i++) {
        a[i - l] = 1;
    }

    test_1(a, l, r);

    for(int i = l; i <= r; i++) {
        if(a[i - l] == 1) {
            printf("%d ", i);
        }
    }

    free(a);
    return 0;
}

void test_1(int a[], int l, int r) {
    if(l == 0) {
        a[0] = a[1] = 0;
    }

    if(l == 1) {
        a[0] = 0;
    }

    int tmp = sqrt(r);
    for(int i = 2; i <= tmp; i++) {
        int tmp_ = max(i * i, (l + i - 1) / i * i);
        for(int j = tmp_; j <= r; j += i) {
            a[j - l] = 0;
        }
    }
}
