#include <stdio.h>

#define ll long long

int main() {
    int n;
    scanf("%d", &n);

    double sum = 0;

    for(int i = 1; i <= n; i++) {
        sum += 1.0 / (2 * i);
    }

    printf("%.5lf", sum);

    return 0;
}
