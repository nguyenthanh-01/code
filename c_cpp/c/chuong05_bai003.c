#include <stdio.h>

#define ll long long

int main() {
    int n = 90;

    ll arr[n];
    arr[0] = 0;
    arr[1] = 1;

    for(int i = 2; i < n; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    for(int i = 0; i < n; i++) {
        printf("%lld ", arr[i]);
    }
 
    return 0;
}
