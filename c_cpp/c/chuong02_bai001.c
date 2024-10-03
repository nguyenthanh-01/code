#include <stdio.h>

#define ll long long

int main() {
    int n;
    scanf("%d", &n);

    int sum = n * (n + 1) / 2;
    printf("S = %d", sum);

    return 0;
}
