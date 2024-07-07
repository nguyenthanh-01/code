#include <stdio.h>

void sort(int [], int);

int main() {
    int n;
    scanf("%d ", &n);

    int arr[n];
    
    for(int i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
    }

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
            if(arr[pos] < arr[j]) {
                pos = j;
            }
        }
        int val = arr[i];
        arr[i] = arr[pos];
        arr[pos] = val;
    }
}
