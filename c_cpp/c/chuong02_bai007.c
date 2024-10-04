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

    if(n%m == 0) {
        printf("%d ", m);
    }

    return 0;
}
