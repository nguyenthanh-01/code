#include <stdio.h>

typedef long long ll;

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int ac1 = a / b * b;
    int ac2 = (a + b - 1) / b * b;
    printf("%d \n%d \n", ac1, ac2);
    return 0;
}
