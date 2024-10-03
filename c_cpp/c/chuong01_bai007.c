#include <stdio.h>

#define ll long long

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int c = a / b * b;
    int d = (a + b - 1) / b * b;

    printf("c = %d \n", c);
    printf("d = %d \n", d);

    return 0;
}
