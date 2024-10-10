#include <stdio.h>

#define ll long long

void giai_thua(int, int *);

int main() {
    int n;
    scanf("%d", &n);

    int res = 1;

    giai_thua(n, &res);

    printf("%d", res);

    return 0;
}

void giai_thua(int n, int *res) {
    if(n == 1) {
        return;
    }

    *res *= n;
    giai_thua(n - 1, res);
}
