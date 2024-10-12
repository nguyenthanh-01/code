#include <stdio.h>

#define ll long long

int main() {
    int m = 1000000;
    int arr[m];

    for(int i = 0; i < m; i++) {
        arr[i] = 0;
    }

    int n;
    scanf("%d", &n);

    while(n--) {
        int x;
        scanf("%d", &x);

        arr[x]++;
    }

    for(int i = 0; i < m; i++) {
        if(arr[i] != 0) {
            printf("%d %d \n", i, arr[i]);
        }
    }

    return 0;
}
