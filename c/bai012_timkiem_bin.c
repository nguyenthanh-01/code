#include <stdio.h>

#define size(a) (int) (sizeof(a) / sizeof(a[0]))

void test_1(int [], int [], int, int, int);

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int l = 0;
    int r = size(a) - 1;
    int x;
    scanf("%d", &x);

    int pos[] = {-1};
    test_1(a, pos, l, r, x);

    printf("vi tri: %d \n", pos[0]);
    return 0;
}

void test_1(int a[], int pos[], int l, int r, int x) {
    if(l > r) {
        return;
    }

    int m = l + (r - l) / 2;

    if(a[m] == x) {
        pos[0] = m;
        return;
    }

    if(a[m] > x) {
        test_1(a, pos, l, m - 1, x);
    }

    if(a[m] < x) {
        test_1(a, pos, m + 1, r, x);
    }
}
