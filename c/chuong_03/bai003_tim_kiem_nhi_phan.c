#include <stdio.h>

#define size(a) (int) (sizeof(a) / sizeof(a[0]))

int lower_bound(int [], int, int, int);
int upper_bound(int [], int, int, int);

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    int n = size(arr);
    
    int x;
    scanf("%d ", &x);

    int lb = lower_bound(arr, 0, n - 1, x);

    if(lb < 0) {
        printf("khong tim thay \n");
    }
    else {
        printf("vi tri: %d \n", lb);
    }

    return 0;
}

int lower_bound(int arr[], int l, int r, int x) {
    int pos = -1;

    while(l <= r) {
        int m = l + (r - l) / 2;

        if(arr[m] == x) {
            pos = m;
            r = m - 1;
        }
        else if(arr[m] > x) {
            r = m - 1;
        }
        else {
            l = m + 1;
        }
    }

    return pos;
}

int upper_bound(int arr[], int l, int r, int x) {
    int pos = -1;

    while(l <= r) {
        int m = l + (r - l) / 2;

        if(arr[m] == x) {
            pos = m;
            l = m + 1;
        }
        else if(arr[m] > x) {
            r = m - 1;
        }
        else {
            l = m + 1;
        }
    }

    return pos;
}
