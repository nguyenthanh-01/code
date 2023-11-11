#include <stdio.h>
#include <math.h>

typedef long long ll;

int main() {
    double a;
    scanf("%lf", &a);
    printf("Double abs: %.0lf \n", 0 - a);
    printf("Double bot: %d \n", (int) sqrt(a));
    printf("Double mid: %.3lf \n", sqrt(a));
    printf("Double top: %.0lf \n", ceil(sqrt(a)));
    return 0;
}
