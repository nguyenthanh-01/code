#include <stdio.h>

typedef long long ll;

int main() {
    int a;
    scanf("%d", &a);
    double res = 0;
    for (int i = 1; i <= a; i++) {
        res += (1.0 / i);
    }
    printf("%.3lf \n", res);
    return 0;
}
