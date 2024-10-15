#include <stdio.h>

#define ll long long

int main() {
    int n = (int) 1e6;
    int arr[n];
    int arr_map[n];

    for(int i = 0; i < n; i++) {
        arr_map[i] = 0;
    }

    int m;
    scanf("%d", &m);

    for(int i = 0; i < m; i++) {
        int x;
        scanf("%d", &x);
        arr[i] = x;
        arr_map[x]++;
    }

    for(int i = 0; i < m; i++) {
        int j = arr[i];

        if(arr_map[j] != 0) {
            printf("%d %d \n", j, arr_map[j]);
            arr_map[j] = 0;
        }
    }

    return 0;
}
