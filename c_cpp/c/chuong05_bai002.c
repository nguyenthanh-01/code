#include <stdio.h>

#define ll long long

int main() {
    int n = (int) 1e6;
    int arr[n];

    for(int i = 0; i < n; i++) {
        arr[i] = 0;
    }

    int m;
    scanf("%d", &m);

    while(m--) {
        int x;
        scanf("%d", &x);
        arr[x]++;
    }

    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            printf("%d %d \n", i, arr[i]);
        }
    }

    return 0;
}
