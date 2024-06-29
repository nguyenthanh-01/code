#include <stdio.h>

#define size(a) (int) (sizeof(a) / sizeof(a[0]))

void test_1(int [], int [], int, int, int);

int main() {
    int a[] = {1, 2, 2, 2, 5};
    int l = 0;
    int r = size(a) - 1;
    
    int x;
    scanf("%d", &x);

    int pos_1[] = {-1, 1};
    test_1(a, pos_1, l, r, x);

    int pos_2[] = {-2, 2};
    test_1(a, pos_2, l, r, x);

    printf("so luong: %d \n", pos_2[0] - pos_1[0] + 1);
    return 0;
}

void test_1(int a[], int pos[], int l, int r, int x) {
    if(l > r) {
        return;
    }

    int m = l + (r - l) / 2;

    if(a[m] == x) {
        pos[0] = m;
        
        if(pos[1] == 1) {
            test_1(a, pos, l, m - 1, x);
        }
        else {
            test_1(a, pos, m + 1, r, x);
        }
    }

    if(a[m] > x) {
        test_1(a, pos, l, m - 1, x);
    }

    if(a[m] < x) {
        test_1(a, pos, m + 1, r, x);
    }
}
