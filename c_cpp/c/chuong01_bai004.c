#include <stdio.h>

#define ll long long
#define Pi 3.14

int main() {
    int R;
    scanf("%d", &R);

    float chu_vi = 2.0 * Pi * R;
    float dien_tich = Pi * R * R;

    printf("Chu vi = %.4f \n", chu_vi);
    printf("Dien tich = %.4f \n", dien_tich);

    return 0;
}
