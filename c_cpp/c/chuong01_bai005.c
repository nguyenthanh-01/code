#include <stdio.h>
#include <math.h>
#define ll long long

int main() {
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    int x = x1 - x2;
    int y = y1 - y2;

    float khoang_cach = sqrt(x * x + y * y);
    printf("Khoang cach = %.2f", khoang_cach);

    return 0;
}
