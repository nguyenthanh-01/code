#include <stdio.h>

typedef long long ll;

double tong (int);

int main() {
    int a;
    scanf("%d", &a);
    printf("%.3lf \n", tong(a));
    return 0;
}

double tong (int a) {
    double res = 0;
    while (a) {
        res += (1.0 / a);
        a--;
    }
    return res;
}
