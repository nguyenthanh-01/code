#include <stdio.h>
#include <math.h>

typedef long long ll;

const double pi = acos(-1);

int main() {
    int a;
    scanf("%d", &a);
    double ans1 = 2 * 3.14 * a;
    double ans2 = 3.14 * a * a;
    printf("%.4lf %.4lf \n", ans1, ans2);
    return 0;
}
