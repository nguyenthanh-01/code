#include <stdio.h>

const int inf = (int) 1e9;

void nhanh_can(int, int, int []);

int main() {
    int n;
    scanf("%d ", &n);

    int cnt = 0;
    int can[] = {inf};

    nhanh_can(n, cnt, can);

    printf("%d ", can[0]);
    
    return 0;
}

void nhanh_can(int n, int cnt, int can[]) {
    if(can[0] == cnt) {
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
