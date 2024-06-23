#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int b = (a % 2) == 0 ? 1: 0;
    printf("%d \n", a + b);
    return 0;
}
