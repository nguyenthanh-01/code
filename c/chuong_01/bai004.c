#include <stdio.h>
#include <math.h>

typedef long long ll;

const double pi = acos(-1);

int main() {
    int a;
    scanf("%d", &a);
    double ac1 = 2 * 3.14 * a;
    double ac2 = 3.14 * a * a;
    printf("%.4lf %.4lf \n", ac1, ac2);
    return 0;
}
