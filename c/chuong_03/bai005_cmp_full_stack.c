#include <stdio.h>
#include <stdbool.h>

#define size(a) (int) (sizeof(a) / sizeof(a[0]))

static inline bool cmp(int *a, int *b) {
    if(*a % 2 != 0) {
        if(*b % 2 == 0) return true;
    }
    else {
        if(*b % 2 != 0) return false;
    }
    return *a > *b ? true : false;
}

void sort(int [], int);

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    int n = size(arr);

    sort(arr, n);

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

void sort(int arr[], int n) {   
    for(int i = 0; i < n - 1; i++) {
        int pos = i;
        
        for(int j = i + 1; j < n; j++) {
            if(cmp(&arr[pos], &arr[j])) {
                pos = j;
            }
        }
        
        int val = arr[i];
        arr[i] = arr[pos];
        arr[pos] = val;
    }
}
