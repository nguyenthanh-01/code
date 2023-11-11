#include <stdio.h>
#include <math.h>

typedef long long ll;

int main() {
    int a;
    scanf("%d", &a);
    int tmp = sqrt(a);
    int res = 0;
    for (int i = 1; i <= tmp; i++) {
        if (a%i == 0) {
            res += 2;
        }
    }
    if (tmp * tmp == a) res -= 1;
    printf("%d \n", res);
    for (int i = 1; i <= tmp; i++) {
        if (a%i == 0) {
            printf("%d ", i);
        }
    }
    for (int i = tmp - (a%tmp == 0); i > 0; i--) {
        if (a%i == 0) {
            printf("%d ", a / i);
        }
    }
    printf("\n");
    return 0;
}
