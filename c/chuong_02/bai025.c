#include <stdio.h>

typedef long long ll;

int main() {
    int a;
    scanf("%d", &a);
    ll tmp = 1;
    double res = 0;
    for (int i = 1; i <= a; i++) {
        res += (1.0 / tmp);
        tmp *= i;
    }
    printf("%.4lf \n", res);
    return 0;
}

/*
error: 0! = 1
*/
