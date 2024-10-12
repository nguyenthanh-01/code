#include <stdio.h>

#define ll long long
#define PI 3.14

int main() {
    int r;
    scanf("%d", &r);

    float chu_vi = 2.0 * PI * r;
    float dien_tich = PI * r * r;

    printf("%.4f \n", chu_vi);
    printf("%.4f \n", dien_tich);

    return 0;
}
