#include <stdio.h>
#include <stdbool.h>

#define size(a) (int) (sizeof(a) / sizeof(a[0]))

typedef struct {int a; int b;} ii;

static inline bool cmp(ii i, ii j) {return i.a > j.a;}

void sort(ii [], int);

int main() {
    ii arr[] = {{3, 4}, {2, 5}, {1, 6}, {4, 3}, {5, 2}};

    int n = size(arr);

    sort(arr, n);

    for(int i = 0; i < n; i++) {
        printf("(%d, %d) ", arr[i].a, arr[i].b);
    }

    return 0;
}

void sort(ii arr[], int n) {   
    for(int i = 0; i < n - 1; i++) {
        int pos = i;
        
        for(int j = i + 1; j < n; j++) {
            if(cmp(arr[pos], arr[j])) {
                pos = j;
            }
        }
        
        ii val = arr[i];
        arr[i] = arr[pos];
        arr[pos] = val;
    }
}
