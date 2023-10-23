#include <stdio.h>

typedef long long ll;

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int ans1 = a / b * b;
    int ans2 = (a + b - 1) / b * b;
    printf("%d \n%d \n", ans1, ans2);
    return 0;
}
