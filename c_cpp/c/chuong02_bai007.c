#include <stdio.h>
#include <math.h>

#define ll long long

int main() {
    int n;
    scanf("%d", &n);

    int m = sqrt(n);

    for(int i = 1; i < m; i++) {
        if(n%i == 0) {
            printf("%d %d ", i, n / i);
        }
    }

    if(1ll * m * m == n) {
        printf("%d ", m);
    }

    return 0;
}
