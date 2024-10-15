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

    int x;
    scanf("%d", &x);

    for(int i = 0; i < n; i++) {
        if(arr[i] == x) {
            printf("yes");
            return 0;
        }
    }
    
    printf("no");
    return 0;
}
