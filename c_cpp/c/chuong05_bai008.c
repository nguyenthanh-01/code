#include <stdio.h>

#define ll long long

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int m = n - k + 1;
    int arr_window[m];

    for(int i = 0; i < m; i++) {
        arr_window[i] = 0;

        for(int j = i; j < i + k; j++) {
            arr_window[i] += arr[j];
        }
    }

    for(int i = 0; i < m; i++) {
        printf("%d ", arr_window[i]);
    }

    return 0;
}
