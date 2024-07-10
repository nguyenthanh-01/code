#include <stdio.h>

#define size(a) (int) (sizeof(a) / sizeof(a[0]))

int search(int [], int, int, int);

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    int n = size(arr);
    
    int x;
    scanf("%d ", &x);

    int vi_tri = search(arr, 0, n - 1, x);

    if(vi_tri == -1) {
        printf("khong tim thay \n");
    }
    else {
        printf("vi tri: %d \n", vi_tri);
    }

    return 0;
}

int search(int arr[], int l, int r, int x) {
    while(l <= r) {
        int m = l + (r - l) / 2;

        if(arr[m] == x) {
            return m;
        }

        else if(arr[m] > x) {
            r = m - 1;
        }

        else {
            l = m + 1;
        }
    }
    return -1;
}
