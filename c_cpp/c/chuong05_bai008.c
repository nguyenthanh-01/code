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
    int arr_win[m];
    arr_win[0] = 0;

    for(int i = 0; i < k; i++) {
        arr_win[0] += arr[i];
    }

    for(int i = 1; i < m; i++) {
        arr_win[i] = arr_win[i - 1] - arr[i - 1] + arr[i + k - 1];
    }


    for(int i = 0; i < m; i++) {
        printf("%d ", arr_win[i]);
    }

    return 0;
}
