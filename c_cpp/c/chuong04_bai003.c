#include <stdio.h>

#define ll long long

int main() {
    int n;
    scanf("%d", &n);

    int s = n / 2 - (n % 2) * n;

    printf("%d", s);

    return 0;
}
