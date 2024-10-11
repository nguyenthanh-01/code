#include <stdio.h>

#define ll long long

int giai_thua(int, int);

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int to_hop = giai_thua(n, n - k) / giai_thua(k, 1);

    printf("%d", to_hop);

    return 0;
}

int giai_thua(int l, int r) {
    int res = 1;

    for(int i = l; i != r; i--) {
        res *= i;
    }

    return res;
}
