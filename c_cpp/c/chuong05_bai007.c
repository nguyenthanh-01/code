#include <stdio.h>

#define ll long long

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int arr_sum[n];
    arr_sum[0] = arr[0];

    for(int i = 1; i < n; i++) {
        arr_sum[i] = arr_sum[i - 1] + arr[i];
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", arr_sum[i]);
    }

    return 0;
}
