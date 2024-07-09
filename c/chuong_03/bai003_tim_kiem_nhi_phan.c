#include <stdio.h>

int search(int [], int, int, int);

int main() {
    int n;
    scanf("%d ", &n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
    }

    int l = 0;
    int r = n - 1;
    
    int x;
    scanf("%d ", &x);

    int vi_tri = search(arr, l, r, x);

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
