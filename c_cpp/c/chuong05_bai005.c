#include <stdio.h>

#define ll long long

int main() {
    int n, x;
    scanf("%d %d", &n, &x);

    int arr[++n];

    for(int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = n - 1; i != x; i--) {
        arr[i] = arr[i - 1];
    }

    arr[x] = 0;

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
