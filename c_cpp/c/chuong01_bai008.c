#include <stdio.h>

#define ll long long

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int tong = a + b;
    int hieu = a - b;
    ll tich = (ll) a * b;

    printf("%d \n", tong);
    printf("%d \n", hieu);
    printf("%lld \n", tich);

    if(b == 0) {
        printf("invalid \n");
    }
    else {
        float thuong = 1.0 * a / b;
        printf("%.4f \n", thuong);
    }

    return 0;
}
