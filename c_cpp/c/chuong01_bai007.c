#include <stdio.h>

#define ll long long

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int nho_hon = a / b * b;
    int lon_hon = (a + b - 1) / b * b;

    printf("%d \n", nho_hon);
    printf("%d \n", lon_hon);

    return 0;
}
