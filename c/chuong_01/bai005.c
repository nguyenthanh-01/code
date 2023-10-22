#include <stdio.h>
#include <math.h>

#define pw(a, b) 1ll * ((a) - (b)) * ((a) - (b))

typedef long long ll;

int main() {
    int a1, a2, b1, b2;
    scanf("%d %d %d %d", &a1, &b1, &a2, &b2);
    double ac = sqrt(pw(a1, a2) + pw(b1, b2));
    printf("%.2lf \n", ac);
    return 0;
}
