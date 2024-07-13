#include <stdio.h>

void de_quy(int, int []);

int main() {
    int n;
    scanf("%d ", &n);

    int sum[] = {0};

    de_quy(n, sum);

    printf("%d ", sum[0]);
    return 0;
}

void de_quy(int n, int sum[]) {
    if(n == 0) {
        return;
    }

    de_quy(n - 1, sum);

    sum[0] += n;
}
