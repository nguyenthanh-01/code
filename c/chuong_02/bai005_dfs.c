#include <stdio.h>
#include <stdlib.h>

const int inf = (int) 1e9;

void nhanh_can(int, int, int []);
void dfs(int, int, int [], int []);

int main() {
    int n;
    scanf("%d ", &n);

    int cnt = 0;
    int can[] = {inf};

    nhanh_can(n, cnt, can);

    int m = can[0];

    int *arr = (int*) calloc(m, sizeof(int));

    dfs(n, cnt, can, arr);

    for(int i = 0; i < m; i++) {
        printf("%d ", arr[i]);
    }
    printf("1 \n");

    free(arr);
    
    return 0;
}

void nhanh_can(int n, int cnt, int can[]) {
    if(can[0] < cnt) {
        return;
    }

    if(n == 1) {
        can[0] = cnt;
        return;
    }

    nhanh_can(n - 1, cnt + 1, can);

    if(n % 2 == 0) {
        nhanh_can(n / 2, cnt + 1, can);
    }

    if(n % 3 == 0) {
        nhanh_can(n / 3, cnt + 1, can);
    }
}

void dfs(int n, int cnt, int can[], int arr[]) {
    if(can[0] < cnt) {
        return;
    }

    if(n == 1) {
        can[0] = 0;
        return;
    }

    arr[cnt] = n;

    dfs(n - 1, cnt + 1, can, arr);

    if(n % 2 == 0) {
        dfs(n / 2, cnt + 1, can, arr);
    }

    if(n % 3 == 0) {
        dfs(n / 3, cnt + 1, can, arr);
    }
}
