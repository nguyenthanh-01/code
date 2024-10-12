#include <stdio.h>

#define ll long long
#define Pi 3.14

int main() {
    int r;
    scanf("%d", &r);

    float chu_vi = 2.0 * Pi * r;
    float dien_tich = Pi * r * r;

    printf("%.4f \n", chu_vi);
    printf("%.4f \n", dien_tich);

    return 0;
}
