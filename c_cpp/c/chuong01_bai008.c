#include <stdio.h>

#define ll long long

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int tong = a + b;
    int hieu = a - b;
    ll tich = 1ll * a * b;

    printf("tong = %d \n", tong);
    printf("hieu = %d \n", hieu);
    printf("tich = %lld \n", tich);

    if(b == 0) {
        printf("invalid \n");
    }
    else {
        float thuong = 1.0 * a / b;
        printf("thuong = %.4f \n", thuong);
    }

    return 0;
}
